import streamlit as st
import requests

def fetch_contents(current_path):
    items = {"Directories": [], "Files": [], 'Download_URL': []}
    response = requests.get(current_path)
    if response.status_code == 200:
        contents = response.json()
        for content in contents:
            if content['type'] == 'dir':
                items['Directories'].append(content['name'])
            if content['type'] == 'file':
                items['Files'].append(content['name'])
                items['Download_URL'].append(content['download_url'])
    return items

def show_file(file_name, file_path):
    response = requests.get(file_path)
    if response.status_code == 200:
        code = response.text
        if len(code) == 0:
            st.info("File is empty!", icon="ℹ️")
        else:
            st.code(code, language=str(file_name.split('.')[-1].lower()))
    else:
        st.error(f"Failed to fetch file from URL: {file_path}", icon="🚨")

def code(github_username, repo_name):
    current_path = f'https://api.github.com/repos/{github_username}/{repo_name}/contents'
    items = fetch_contents(current_path)
    dir = 'Choose Directory'
    ite = 'Choose File'
    key = 1

    while True:
        if dir != 'Choose Directory':
            current_path = current_path + f'/{dir}'
            dir = 'Choose Directory'
            items = fetch_contents(current_path)

        if items['Directories'] and items['Files']:
            x, y = st.columns(2)
            with x:
                dir = st.selectbox(f"Choose from {current_path.split('/')[-1]} Directory:", ['Choose Directory'] + [item for item in items['Directories']], key=key)
                key = key+1
            with y:
                ite = st.selectbox("Choose Files:", ['Choose File'] + [item for item in items['Files']], key=key)
                key = key+1
        elif items['Directories']:
            dir = st.selectbox(f"Choose from {current_path.split('/')[-1]} Directory:", ['Choose Directory'] + [item for item in items['Directories']], key=key)
            key = key+1
        elif items['Files']:
            ite = st.selectbox("Choose Files:", ['Choose File'] + [item for item in items['Files']], key=key)
            key = key+1
        else:
            st.error(f"Failed to fetch file from URL: {current_path}", icon="🚨")

        if ite != 'Choose File':
            try:
                show_file(ite, items['Download_URL'][items["Files"].index(ite)])
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


if __name__ == '__main__':
    github_username = 'Avdhesh-Varshney'
    repo_name = 'CPMasterLog'
    st.header('My Problem Solving Skills')
    dashboard()
    st.divider()
    st.write('### My Code Files!')
    code(github_username, repo_name)
    st.info('If you liked it, ⭐ this repository. https://github.com/Avdhesh-Varshney/CPMasterLog', icon='💖')
