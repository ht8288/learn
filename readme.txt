Git is a distributed version control system.
Git is free software distributed under the GPL.
Git has a mutable index called stage
ssh-keygen -t rsa -C "youremail@example.com"

git remote add origin https://github.com/ht8288/learn.git
git push -u origin master

echo "# learn" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/ht8288/learn.git
git push -u origin master

git remote add origin git@github.com:michaelliao/learngit.git