## Make changes to a new branch (other than main) in the forked repo:
- `git clone -b <branch_name> <fork_url>`

  Ex: `git clone -b ethnicity-classification https://github.com/Subhranil2004/DL-Simplified.git`

- Add original repo as upstream
  Ex: `git remote add upstream https://github.com/abhisheks008/DL-Simplified.git`

- Verify the branch u are updating
  `git branch` if not then, `git checkout -b <branch-name>` 
- Do local changes
  `git add .` and `git commit -m "..."`
- Pull the changes from the original repo
  `git pull upstream main` when `main` is the main branch of action in orig repo

- Push
  `git push origin <branch-name>`

  If errors come at this stage:
```sh
PS E:\GSSoC24\DL-Simplified\Ethnicity Classification of Asian People> git push origin ethnicity-classification
To https://github.com/Subhranil2004/DL-Simplified.git
 ! [rejected]        ethnicity-classification -> ethnicity-classification (fetch first)
error: failed to push some refs to 'https://github.com/Subhranil2004/DL-Simplified.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```
Do `git pull` then repeat the last cmd.
Like:
```sh
PS E:\GSSoC24\DL-Simplified\Ethnicity Classification of Asian People> git pull
remote: Enumerating objects: 4, done.
remote: Counting objects: 100% (4/4), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 2 (delta 1), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (2/2), 974 bytes | 21.00 KiB/s, done.
From https://github.com/Subhranil2004/DL-Simplified
   9ba92a4..fa686c1  ethnicity-classification -> origin/ethnicity-classification
Merge made by the 'ort' strategy.
```
