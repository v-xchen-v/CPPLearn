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
