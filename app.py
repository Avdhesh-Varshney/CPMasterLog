import streamlit as st
import os

BASE_DIR = os.path.dirname(__file__)

def fetchContents(current_path):
    items = {"Directories": [], "Files": []}
    for entry in os.listdir(current_path):
        entry_path = os.path.join(current_path, entry)
        if os.path.isdir(entry_path):
            items['Directories'].append(entry)
        elif os.path.isfile(entry_path):
            items['Files'].append(entry)
    return items

def showFile(file_name, file_path):
    try:
        with open(file_path, 'r') as file:
            code = file.read()
            if len(code) == 0:
                st.info("File is empty!", icon="ℹ️")
            else:
                st.code(code, language=str(file_name.split('.')[-1].lower()))
    except UnicodeDecodeError:
        st.warning("This file cannot be decoded. It's likely a binary file.", icon="⚠️")

def showCode():
    current_path = BASE_DIR
    items = fetchContents(current_path)
    dir = 'Choose Directory'
    ite = 'Choose File'
    key = 1

    while True:
        if dir != 'Choose Directory':
            current_path = os.path.join(current_path, dir)
            dir = 'Choose Directory'
            items = fetchContents(current_path)

        if items['Directories'] and items['Files']:
            x, y = st.columns(2)
            with x:
                dir = st.selectbox(f"Choose from {current_path.split(os.sep)[-1]} Directory:", ['Choose Directory'] + items['Directories'], key=key)
                key += 1
            with y:
                ite = st.selectbox("Choose Files:", ['Choose File'] + items['Files'], key=key)
                key += 1
        elif items['Directories']:
            dir = st.selectbox(f"Choose from {current_path.split(os.sep)[-1]} Directory:", ['Choose Directory'] + items['Directories'], key=key)
            key += 1
        elif items['Files']:
            ite = st.selectbox("Choose Files:", ['Choose File'] + items['Files'], key=key)
            key += 1
        else:
            st.error(f"No files or directories found in: {current_path}", icon="🚨")

        if ite != 'Choose File':
            try:
                showFile(ite, os.path.join(current_path, ite))
            except:
                st.warning("This file is *charmap codec*. So, It can't decoded.", icon="⚠️")
            ite = 'Choose File'
        if dir == 'Choose Directory' and ite == 'Choose File':
            break

def dashboard():
    col1, col2 = st.columns(2)
    with col1:
        st.write("#### LeetCode Stats")
        st.write("Visit [My LeetCode Profile](https://leetcode.com/AvdheshVarshney)")
        st.image("https://leetcode.card.workers.dev/?username=AvdheshVarshney&theme=dark&extension=activity", use_column_width=True)
    
    with col2:
        st.write("#### Codeforces Stats")
        st.write("Visit [My Codeforces Profile](https://codeforces.com/profile/avdheshv)")
        st.image("https://codeforces-readme-stats.vercel.app/api/card?username=avdheshv&theme=rose_pine&disable_animations=false&show_icons=true&force_username=false", use_column_width=True)
    
    x, y = st.columns(2)
    with x:
        st.write("#### GeeksforGeeks Stats")
        st.write("Visit [My GeeksforGeeks Profile](https://auth.geeksforgeeks.org/user/avdhesh_varshney/)")
        st.image("https://geeks-for-geeks-stats-api-napiyo.vercel.app/?userName=avdhesh_varshney&theme=dark", use_column_width=True)

    colx, coly = st.columns(2)
    with colx:
        st.write("#### HackerRank Stats")
        st.write("Visit [My HackerRank Profile](https://www.hackerrank.com/profile/avdheshvarshney1)")
    with coly:
        st.write("#### CodeChef Stats")
        st.write("Visit [My CodeChef Profile](https://www.codechef.com/users/avdhesh15)")

if __name__ == '__main__':
    st.title('My Problem Solving Skills')
    st.divider()
    dashboard()
    st.divider()
    st.write('### My Code Files!')
    showCode()
    st.info('If you liked it, ⭐ this repository. https://github.com/Avdhesh-Varshney/CPMasterLog', icon='💖')
