# More about CI/CD pipeline

As mentioned before, <br>

<strong>CI: </strong> After commiting/pushing the code, **Azure DevOps** automatically compiles the code. 
ıt aims to instantly figuring out whether "the compiling was succesfull or not". 

<strong>CD: </strong>Sending the compiled output to somewhere such as server, cloud, another machine etc. The aim is to maintain deployment after the build process without handling it manually.

> A stage represents a logical phase in the pipeline, such as build, test, or deploy.
A job is a collection of steps that run on the same agent, grouping related tasks together (e.g., compiling code, running tests, deploying artifacts).
Each stage can contain one or more jobs. Jobs within a stage may run sequentially or in parallel, depending on the configuration.
Stages always run in sequence — for example: build → test → deploy.


### Deployment process

In order to maintain CI/CD, 

Deployment is crucial since it means to distribute the codes to the target environment. 
If any test codes exist, they get included and ran before the distribution.<br>

### What is git submodule?

Gt submodule allows us to add a dependent repository into the main repository. This dependent repository could be a library or a shared code snippet that needs to be used in the main project. We can link this submodule as reference instead of directly copying it. 

This way we can maintain; 
<l>
    <li> clone the submodule inside the main repo </li>
    <li> protect the submodule from any changes<> </li>
    <li> update the submodule when the main repo has updated (via "git submodule update" command) </li>
</l>

We can think the submodule term like the branch's function, track the contributors, protect the changes/updates and separate the commits for each one. 


Since my project has complex layer and dependency structure, it might seem submodule could be considered as an option to handle dependent folders. However we don't necessarily need them at the moment.
A well-written yaml and script would be better. 

## Bash script

