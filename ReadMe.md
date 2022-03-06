# GitHubProject 
Some instructions on how to use GitHub <br/><br/> 


## Create a new repository from command line

<pre><p align="center">
<img src="https://user-images.githubusercontent.com/86133411/156934273-8a278cb8-0c8e-4c9e-b03d-56e5ca5e21b5.png"  width="742" height="349">
</p></pre>

1. At PC create a folder CMake_HelloWorld <br/>
2. New a README.md file and .gitignore file <br/>
3. $ git init <br/>
4. Add and update files 
5. Check $ git status <br/>
6. $ git add .
7. $ git commit -m "some text" <br/>
8. $ git branch -M master <br/>
9. $ git branch 
10. $ git remote add origin https://github.com/zzc01/test.git <br/>
11. $ git remote -v <br/>
12. At GitHub new a repository named test <br/>
13. $ git branch -r 
14. $ git push -u origin master <br/>


## Merge branches 

<pre><p align="center">
<img src="https://user-images.githubusercontent.com/86133411/156934342-146c58d1-42c8-45f2-98f3-69146a3e058f.png"  width="742" height="349">
</p></pre>

1. $ git checkout master 
2. $ git merge branch3
If there are conflict, will create conflict report in $ git status. 
And in the conflicted files will have <<<<<<< HEAD, >>>>>>> branch3 marks. 
3. Can remove the reports using $ git merge –abort 
4. Manually resolve the conflict 
5. $ git commit -am “conflict resolved”
Commit and finalize the merge 


## Download a git repository 
1. Copy the url from github at Code -> Clone -> HTTPS. 
2. Open Git Bash. Create a new directory on you local computer. 
3. Type git clone, and then paste the URL you copied earlier. "git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY"
4. Now have the project in local.  

## Publish a fresh project from VS to github 

1. Open or new a project or solution. githubproject. 
2. Extensions -> online -> github extension for visual studio 
 download and install 
 may need to restart 
 couldn't find this extension 
3. Download and install git. (search from google) 
4. Add to source control, bottom right corner of VS
 will see git icon 
5. Connect github account 
 login details 
 signin 
6. publish the project , bottom right corner of VS
^
|
this icon 
7. Publish to github 
 name of project 
 add some descriptions 
8. Can select private repository

 

## References 
https://www.youtube.com/watch?v=Y1fBfrcRMEs
