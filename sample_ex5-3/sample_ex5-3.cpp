#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// stack:新しいデータから取り出す
// queue:突っ込んだ順番にデータを取り出す
int main(){
    stack<int> stk;
    queue<int> que;
    int data[] = { 1, 2, 3 };
    int i;
    for( i = 0; i < 3; i++ ){
        stk.push( data[i] );
        que.push( data[i] );
    }
    // データの出力(stack)
    cout << "stack : ";
    while( !stk.empty() ){
        // topで要素を取得し、popでその要素をstkから取り除く(2段階の作業が必要)
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    // データの出力(queue)
    cout << "queue : ";
    while( !que.empty() ){
        // frontで要素を取得し、popでその要素をqueから取り除く(2段階の作業が必要)
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
}
