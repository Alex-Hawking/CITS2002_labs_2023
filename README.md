# CITS2002_labs_2023
This is a repository for holding answers to the CITS2002 labs.

Question can be found here: https://teaching.csse.uwa.edu.au/units/CITS2002/schedule.php

Each answer is stored as a branch with the following naming convention that must be used:
```
lab_x_question_x
```

## Usage Guide

### Setting up

To use on your computer first install git, then go to wherever you want to store this and run:
```
git clone https://github.com/Alex-Hawking/CITS2002_labs_2023.git
```

### Viewing and running

Once you are in that directory you can see and run the current answers (provided they exist) using:
```
git checkout lab_x_question_x
```

This will change the contents of your folder to whatever code is in the branch you are currently checking out.

#### Note

Please make sure you are viewing the lastest version of the repo on your local machine by pulling regularly. I would recommend doing this by pulling from main  at the start of your studying sessions and then merging with what is on your local machine. E.g.
```
git switch main
git pull
git checkout lab_x_question_x
git merge main
```

### Updating

To add new answers simply create a new branch using the naming convention and push `main.c`:
```
git add main.c
git commit -m "add code/your comment"
git push
```

(Note there is no checking of PRs so just make sure youre code is right)

To update a branch first pull and merge to make sure you are up to date. Then use the same command as above. You can figure out how to resolve merge conflicts idk.