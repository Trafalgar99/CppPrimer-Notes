# IO 库

istream ostream cin cout cerr >> << getline

## IO 类

IO 库的头文件

- iostream --> IO
- fstream --> file
- sstream --> string

标准库定义了一组以 w 开头的函数和对象来处理宽字符 如 wcin wcout wifstream

**IO 类型间的关系**

设备类型和字符大小不会影响我们要执行的 IO 操作 ---> 继承机制

ifstream istringstream 继承自 istream

### IO 对象无拷贝或赋值

一般以引用的方式处理 IO 参数或返回值，且不设置为 const，因为读写会改变 IO 流状态

### 条件状态

当输入了 cin 并不期望得到的数据 cin 就会发生错误

```cpp
int c;
cin>>c;
// 输入 asd
```

一个流一旦发生错误，后续的读写操作都会失败

可以进行条件测试

```cpp
while (cin>>word)
...
```

**查询流的状态**

IO 库定义了 4 个 iostate 类型的 constexpr 值

- badbit 不可恢复
- failbit 可以恢复
- eofbit 文件末尾
- goodbit ok
  还有四个等价函数

badbit failbit eofbit 任意一个被置位都意味着 io 失败

**管理条件状态**

流对象的 rdstate 返回一个 iostate 值，setstate 将给定条件位置位，clear 不接受参数将复位所有错误标志位，clear 接收参数将复位指定的条件位

```cpp
cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);
```

### 管理输出缓冲

每个输出流都管理一个缓冲区

**刷新输出缓冲区**

- endl 换行+刷新缓冲区
- flush 无+刷新。。。
- ends 空字符+刷新。。。

**unitbuf 操作符**

```cpp
cout<<unitbuf; //所有输出操作后都会立即刷新缓冲区

cout<<nounitbuf; //回到正常的缓冲方式
```

> 程序崩溃，输出缓冲区不会别刷新

**关联输入和输出流**

当一个输入流被关联到一个输出流时，任何试图从输入流读取数据的操作都会先刷新关联的输出流
标准库将 cin 和 cout 关联

```cpp
cin>>i;
```

导致 cout 的缓冲区被刷新

x.tie()将返回输入流关联的输出流的指针，x.tie(&o)将 x 关联到 o

## 文件输入输出

fstream ifstream ofstream

### 使用文件流对象

创建文件 io 对象

```cpp
ifstream in(filename);
ofstream out;
```

可以在需要传 istream&的地方传递 fistream 或者 isstream --> 继承特性

**成员函数 open 和 close**

如果定义了一个空文件流对象，可以随后调用 open 来将它与文件关联起来

调用 open 可能会失败 此时 failbit 会被置位 可以检查是否 open 成功

```cpp
if(out)
```

在将文件流关联到另一个文件之前需要 close

> 当一个 fstream 对象被销毁时，close 会自动被调用

### 文件模式

## string 流

sstring istringstream ostringstream stringstream

### 使用 istringstream

### 使用 ostringstream
