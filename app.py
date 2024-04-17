import streamlit as st
import os

def fetch_contents(path):
    items = {"Directories": [], "Files": []}
    exceptions = ['__pycache__', '.git', '.cph', 'myenv', 'exe', 'class', 'assets', 'Templates']
    for item in os.listdir(path):
        if os.path.isdir(os.path.join(path, item)):
            if item not in exceptions:
                items['Directories'].append(item)
        else:
            if item.split('.')[-1].lower() not in exceptions:
                items['Files'].append(item)
    return items

def show_file(file_path):
    with open(file_path, 'r') as file:
        code = file.read()
    st.code(code, language=str(file_path.split('.')[-1].lower()))
    if len(code) == 0:
        st.info("File is empty!", icon="ℹ️")

def code():
    current_path = '/'
    dir = 'Choose Directory'
    ite = 'Choose File'
    key = 1

    while True:
        if dir != 'Choose Directory':
            current_path = os.path.join(current_path, dir)
            dir = 'Choose Directory'
        items = fetch_contents(current_path)

        if items['Directories'] and items['Files']:
            x, y = st.columns(2)
            with x:
                dir = st.selectbox(f'{current_path} Directory:', ['Choose Directory'] + [item for item in items['Directories']], key=key)
                key = key+1
            with y:
                ite = st.selectbox('Choose Files:', ['Choose File'] + [item for item in items['Files']], key=key)
                key = key+1
        elif items['Directories']:
            dir = st.selectbox(f'{current_path} Directory:', ['Choose Directory'] + [item for item in items['Directories']], key=key)
            key = key+1
        elif items['Files']:
            ite = st.selectbox('Choose Files:', ['Choose File'] + [item for item in items['Files']], key=key)
            key = key+1
        else:
            st.info('Folder is empty!', icon='ℹ️')

        if ite != 'Choose File':
            try:
                show_file(os.path.join(current_path, ite))
            except:
                st.warning("This file is *charmap codec*. So, It can't decoded.", icon="⚠️")
            ite = 'Choose File'
        if dir == 'Choose Directory' and ite == 'Choose File':
            break

if __name__ == '__main__':
    st.header('My Problem Solving Skills')
    st.success('Solved problems on different platforms.', icon="✅")
    st.divider()
    st.title('My Code Files!')
    code()
    st.info('If you liked it, ⭐ this repository. https://github.com/Avdhesh-Varshney/CPMasterLog', icon='💖')
