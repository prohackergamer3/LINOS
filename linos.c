#include <stdio.h>
#include <stdlib.h>
int main() {
    while(1) {
     printf("linos$");
     char inp[100];
     scanf("%s",inp);
     if(strcmp(inp,"installpack") == 0) {
       printf("pack name:");
       char cmd[100];
       scanf("%s",cmd);
       char pname[100];
       strcpy(pname,"pkg install ");
       strcat(pname,cmd);
       system(pname);
    }
    if(strcmp(inp,"opensettings") == 0) {
     system("am start -a android.settings.SETTINGS");
    }
    if(strcmp(inp,"openyt") == 0) {
     system("am start -n com.google.android.youtube/com.google.android.youtube.HomeActivity");
    }
    if(strcmp(inp,"openapps") == 0) {
     system("am start -a android.intent.action.VIEW -d https://play.google.com/store/apps");
    }
    if(strcmp(inp,"installpromuslim") == 0) {
     system("am start -a android.intent.action.VIEW -d https://play.google.com/store/apps/details?id=com.bitsmedia.android.muslimpro");


   }
   if(strcmp(inp,"help") == 0) {
    printf("opensettings:opens settings\nopenapps:opens app manager(play store)\ninstallpromuslim:installs pro muslim app\nopenyt:opens youtube\nusepack:Allows you to use a package\ninstallgithubproject:Downloads a github project\nrunpyfile:Runs a python file\n");
   }
    if(strcmp(inp,"usepack")  == 0) {
    char pname[100];
    printf("pack name:");
    scanf("%s",pname);
    system(pname);
   }
   if(strcmp(inp,"installgithubproject") == 0) {
    char url[100];
    char git[100];
    printf("url:");
    scanf("%s",url);
    strcpy(git,"git clone ");
    strcat(git,url);
    system(git);
   }
   if(strcmp(inp,"runpyfile") == 0) {
    char py[100];
    char name[100];
    printf("name:");
    scanf("%s",name);
    strcpy(py,"python3 ");
    strcat(py,name);
    system(py);
   }
  }


}
