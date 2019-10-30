# 2일차
## GitHub
1. [GitHub](https://github.com/) 회원가입(회원가입 시 가급적이면 본인 이름이 들어가도록)
2. git bash [다운로드](https://git-scm.com)
3. 계정 정보 등록
- git config --global user.name "이름"
- git config --global user.email "이메일"
- 한번만 등록하면 bash 종료해도 계속 유지됨
4. 디렉토리(원하는 폴더로 설정)
- cd Desktop
5. 원격 Repository에서 로컬로 다운로드
- git clone https://github.com/UserName/RepositoryName.git
6. (개발 진행)
7. 디렉토리 이동
- cd RepositoryName
8. 작업한 파일 add
- git add Source.c
- 혹은 전체 파일 선택하려면 git add .
9. 커밋, 커밋 메시지 작성
-  git commit -m "Commit Message"
10. push (원격 repository로 전송)
- git push
11. 기타
- 작업하기 전 sync 맞추기 위해 git pull 수시로 입력
- git status로 현재 상태 확인 가능