#include<unistd.h>

/*access()函数:判断用户是否具有访问某个文件夹的权限（或判断某个文件是否存在）
int access(const char *pathname,int mode)
param:
    pathname:表示需要判断文件路径
    mode(表示测试的模式可能的值):
        R_OK:是否具有读取权限   
        W_OK:是否具有写权限
        X_OK:是否具有可执行权限
        F_OK:是否存在
return:成功返回0，否则返回-1
*/


