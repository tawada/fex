#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    char exe_path[] = "/mnt/c/Windows/explorer.exe";
    char command[256];
    char now_path[256];
    char* r;
    char open_path[256];

    r = getcwd(now_path, sizeof(now_path));
    if(r==NULL)
    {
        exit(1);
    }

    if(r == strstr(r, "/mnt/c"))
    {
        // length of "/mnt/c"
        int i, j=0;
        open_path[j++]='c';
        open_path[j++]=':';
        for(i=6;i<256;i++)
        {
            if(r[i]==0)
                break;
            if(r[i]=='/')
            {
                open_path[j++]='\\';
                open_path[j++]='\\';
            }
            else
            {
                open_path[j++]=r[i];
            }
        }
        open_path[j]=0;
    }
    else
    {
        printf("out of service");
        return 0;
    }
    sprintf(command, "%s %s", exe_path, open_path);
    system(command);
    return 0;
}
