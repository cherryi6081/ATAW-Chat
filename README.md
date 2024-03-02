# Qt Widgets ATAW-Chat (Any Time Any Where WeChat)
![badge](https://badge.next/badge/QtWidgets/green?icon:bitcoin-lightning)
 ## ***An instant chat application modeled after wechat social media software, the main language is C++, QML. Qt-based implementation of C/S architecture communication, communication functions are all completed by QTcpSocket. The software is divided into two parts, one is the server, the other is the client.***
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/%E5%9B%BE%E7%89%8722(%20%E9%A6%96%E9%A1%B5%E7%95%8C%E9%9D%A2).png)
 
## Features
  _There is a server and multiple clients in the process of running the program. Clients cannot communicate directly with each other. All messages must first pass through the server, which parses the message and processes it according to the message type. The server acts as a transfer station for the whole process.Message communication is encapsulated in QJsonValue format for easy encapsulation and parsing_
  
## Module structure
 _The whole design can be roughly divided into the server side and the client side. The function of the server side is relatively simple, and only the message management and forwarding of the client side are done. Database read and write, etc. The client is relatively rich. Including login, registration, friend management, group management, tcp message management, database management_
 ![Screenshot of ATAW-Chat's module structure](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/module.png)
 
 ## Supported functions
 
 ### log in page
  ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片1.png)
  Fill in your account password according to the input box in the login interface shown in the above picture:
  > Username: Enter the id of the account (not the user name)

  > Password: Enter the password corresponding to the account
### register page
   ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片4.png)
   
### server page
   ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片2.png)
   Configure the server IP address, port number, and file port number.
   
### Establish server connection page
  ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片3.png)
  [![Star History Chart](https://api.star-history.com/svg?repos=zhuzichu520/FluentUI&type=Date)]
### Add friends
  ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片7.png)
  But you can't friend yourself.
  
### Create a group chat
    ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片8.png)
    Then you can receive the latest news of group messages in real time.
    ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片9.png)
    
### Send group file
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片10.png)
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片11.png)
 
### Private chat
Similarly, private conversations can be transferred files
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片12.png)
 and also,you can send your favorite memes to enhance the atmosphere of your chat (it is not possible to add custom memes at present, it is under development...)
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片13.png)
Similarly, private conversations can be transferred files.
 ![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片14.png)
In order to make the function more diversified, we specially implemented the instant screenshot function.
![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片15.png)
Weather cards are also added.
![Screenshot of ATAW-Chat](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片16.png)

### Server management
![Screenshot of ATAW-Chat Server](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片17.png)
![Screenshot of ATAW-Chat Server](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片18.png)
![Screenshot of ATAW-Chat Server](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片19.png)
![Screenshot of ATAW-Chat Server](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片20.png)
![Screenshot of ATAW-Chat Server](https://github.com/cherryi6081/ATAW-Chat/blob/main/doc/preview/图片21.png)

[![Star History Chart](https://api.star-history.com/svg?repos=zhuzichu520/FluentUI&type=Date)]
#### ⚡ Visitor count:
![visitor count](https://profile-counter.glitch.me/ATAW-Chat/count.svg)
#### Account information statistics:
![GitHub information count](https://github-stats.ubrong.com/api?username=cherryi6081&show_icons=true)
