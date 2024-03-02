# Qt Widgets ATAW-Chat (Any Time Any Where WeChat)
 
   ***An instant chat application modeled after wechat social media software, the main language is C++, QML. Qt-based implementation of C/S architecture communication, communication functions are all completed by QTcpSocket. The software is divided into two parts, one is the server, the other is the client.***
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/%E5%9B%BE%E7%89%8722(%20%E9%A6%96%E9%A1%B5%E7%95%8C%E9%9D%A2).png)
 
## Features
 _There is a server and multiple clients in the process of running the program. Clients cannot communicate directly with each other. All messages must first pass through the server, which parses the message and processes it according to the message type. The server acts as a transfer station for the whole process.Message communication is encapsulated in QJsonValue format for easy encapsulation and parsing_
## Module structure
_The whole design can be roughly divided into the server side and the client side. The function of the server side is relatively simple, and only the message management and forwarding of the client side are done. Database read and write, etc. The client is relatively rich. Including login, registration, friend management, group management, tcp message management, database management_
 ![Screenshot of ATAW-Chat's module structure](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/module.png)
 ## Supported components
 ### log in 
  ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片1.png)
  Fill in your account password according to the input box in the login interface shown in the above picture:
  > Username: Enter the id of the account (not the user name)

  > Password: Enter the password corresponding to the account
#### Account information statistics:
![GitHub账户信息统计](https://github-stats.ubrong.com/api?username=cherryi6081&show_icons=true)
