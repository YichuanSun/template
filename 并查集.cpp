//并查集，直接用日本人书上的代码也行
//设数组parent存放集合,parent[i]=j意为i的根节点为j
//规定根节点处的元素值为负，它的相反数为该集合节点个数
#include <bits/stdc++.h>
#define MAX_E 1005
#define N 1005
using namespace std;

int parent[N];

void UFset();       //并查集初始化函数
int Find(int x);    //查找函数
void Union(int R1,int R2);      //将R1和R2所在集合合并
bool same(int a,int b);         //判断a和b是否在同一个集合中

int main()  {
    return 0;
}

//初始化
void UFset()    {
    for (int i=0;i<n;i++)   parent[i]=-1;
}

//查找并返回节点x所属集合的根节点
int Find(int x)     {
    int s;
    for (s=x;parent[s]>=0;s=parent[s]);     //不停循环直至找到集合的根节点s
    while (s!=x)    {                       //路径压缩，将路径上的所有节点的根节点全都设为s
        int tmp=parent[x];
        parent[x]=s;
        x=tmp;
    }
    return s;
}

// R1和R2是两个元素，属于两个不同的集合，现在合并这两个集合
void Union(int R1,int R2)   {
    int r1=Find(R1),r2=Find(R2);    //r1是R1的根节点，r2是R2的根节点
    int tmp=parent[r1]+parent[r2];  //-tmp是合并后的集合的节点数
    if (parent[r1]>parent[r2])  {   //由于是负的，如果r1集合元素少于r2集合元素
        parent[r1]=r2;              //将r1合并到r2中
        parent[r2]=tmp;             //新集合元素为-tmp
    }
    else {                          //与上同理
        parent[r2]=r1;
        parent[r1]=tmp;
    }
}

bool same(int a,int b)  {
    if (Find(a)==Find(b))   return true;
    return false;
}
