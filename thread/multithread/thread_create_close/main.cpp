#include <iostream>
#include <pthread.h>

using namespace std;
void* say_hi(void* args)
{
    cout<<"hello from thread"<<endl;
}

int main()
{
    pthread_t tid;
    int ret = pthread_create(&tid, NULL, say_hi, NULL);
    // params is created thread id, thread params. function thread called, function params by order
    if(ret)
    {
        cout<<"fail to create thread, error:ret = "<<ret<<endl;
    }




    cout << "Hello World!" << endl;
    return 0;
}

//谷歌拼音输入法

//1,通过指令：

//sudo apt-get install fcitx-googlepinyin

//2， 在settings -> language support 里将 keyboard input method system 设置为fcitx

//3， 重启

//在settings-> Text Entry 里，添加输入源， 搜索 google-pinyin，添加。

//4， 按Ctrl +Space 可以中英文输入切换
