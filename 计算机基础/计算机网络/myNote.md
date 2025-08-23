# 第一章 概述

## 一、计算机网络在信息时代的作用
计算机网络已经由一种通信基础设施发展成为一种重要的信息服务基础设施。  
计算机网络已经像水、电等这些基础设施一样，称为生活中不可或缺的一部分。

## 二、因特网概述
### 1.网络、互联网和因特网
![alt text](/计算机网络/picture/{4EF61F30-C44C-408A-99DD-3A3097C8320F}.png)
### 2.因特网发展的三个阶段
![alt text](/计算机网络/picture/{CC47CA14-0C57-4606-B8B1-C56595C2EC70}.png)
> 因特网必须要有IP地址才可以接入
### 3.因特网服务提供者ISP（Internet Service Provider）
例如中国移动、电信、联通等等
- 从因特网管理机构申请到成块的IP地址
- 拥有路由器以及通信线路等联网设备
- 机构或个人用户向ISP缴纳费用即可从ISP的到IP地址
![alt text](/计算机网络/picture/{D9ADF61D-B88D-4B61-830D-C158D484CFF8}.png)
### 4.因特网的标准化工作
![alt text](/计算机网络/picture/{A8E39039-5AF4-4D1E-917A-F11BF82A085C}.png)
### 5.因特网的组成
![alt text](/计算机网络/picture/{557AA53E-CB25-4351-9235-0E07132A2049}.png)

## 三、三种交换方式
### 1.电路交换
![alt text](/计算机网络/picture/{3FD959D4-0EDD-4E9C-A9D8-8AF745478FEA}.png)
![alt text](/计算机网络/picture/{F9BBCEC8-8F73-411F-BD0E-299B6E40D2B8}.png)
### 2.分组交换
![alt text](/计算机网络/picture/{A512BA95-5D5B-41A5-BAE0-C61319FB4293}.png)
### 电路交换、分组交换、报文交换的对比
![alt text](/计算机网络/picture/{68ED9FB0-41FA-4650-ADD9-69E85A5D013B}.png)

## 四、计算机网络的定义以及分类
### 1.定义
- 计算机网络的精确定义未统一
- 计算机网络的最简单的定义是：一些互相连接的、自治的计算机的集合。
    - 1. 互连 是指计算机之间可以通过有线或者无线的方式进行数据通信
    - 2. 自治 是指独立的计算机，它有自己的硬件和软件，可以单独运行使用
    - 3. 集合 是指至少需要两台计算机
- 计算机网络较好的定义
    ![alt text](/计算机网络/picture/{F28D2390-5424-4AD8-9767-8D591282B508}.png)
### 2.分类
![alt text](/计算机网络/picture/{DA0DEAEE-F9EF-45CF-9F42-973A1D38702F}.png)

## 五、计算机网络的性能指标
![alt text](/计算机网络/picture/{9A2351B4-3654-436A-A322-794DB6BAE198}.png)
### 1.速率
![alt text](/计算机网络/picture/{22A40C36-EDEA-4912-B870-15BF830D6B0E}.png)
### 2.带宽
![alt text](/计算机网络/picture/{73118E57-237E-4ACE-ACB6-DA553DAEFC31}.png)
### 3.吞吐量
![alt text](/计算机网络/picture/{C4E8F79D-6AED-4497-BE3D-95AB6A200901}.png)
### 4.时延
![alt text](/计算机网络/picture/{A9438C5F-5AD4-4DC2-B2A5-CDAA1776BE5A}.png)
![alt text](/计算机网络/picture/{4C54204D-5861-4965-A3AC-C93E785E5F77}.png)
> 占主导的时延应具体问题具体分析，不同的数据传输量，占主导的时延不同
![alt text](/计算机网络/picture/{282EE3A0-D67C-4CBC-9B80-FD49E0CE9799}.png)
![alt text](/计算机网络/picture/{0FC07085-5DFF-4ECF-8ECF-C0333099BC43}.png)
![alt text](/计算机网络/picture/{F0E532B7-F217-4C67-A9C2-C6F4DDE176A8}.png)
![alt text](/计算机网络/picture/{7C1D2304-1EFB-4D50-A7B4-4BB35809DA78}.png)
![alt text](/计算机网络/picture/{D577FD5D-D3CE-4D8B-ACDA-B6E38572219C}.png)
![alt text](/计算机网络/picture/{0FFC13A2-19A9-4772-B41A-2F2DF1697E1C}.png)
![alt text](/计算机网络/picture/{4333C89E-DA0E-4756-9FB8-2BFE08EAB6E1}.png)
### 5.时延带宽积
![alt text](/计算机网络/picture/{19ACED83-9C56-4C7D-8646-1B47EEF7D5FB}.png)
### 6.往返时间
源主机发送分组开始，到源主机收到来自目的主机的确认分组为止的时间。
![alt text](/计算机网络/picture/{B6403DC4-7DAC-43D3-AAE1-31A780A062E9}.png)
### 7.利用率
![alt text](/计算机网络/picture/{F8FC440D-47B2-4D80-AA1A-13D74928229E}.png)
### 8.丢包率
![alt text](/计算机网络/picture/{189507BF-C384-4651-9F7B-29CDFCED1AAE}.png)

## 六、计算机网络体系结构
### 1.常见的计算机网络体系结构
1. OSI体系结构
    ![alt text](/计算机网络/picture/{377C6CFF-4A6E-4EFC-8B77-CA8DB8762AFE}.png)
2. TCP/IP体系结构
![alt text](/计算机网络/picture/{225FF75B-64F3-4C65-91E9-841C47AD5D1E}.png)
![alt text](/计算机网络/picture/{FD007395-D718-459A-8A5A-9D8EE5889263}.png)
### 2.计算机网络体系结构分层的必要性
> 计算机网络是个非常复杂的系统
> 分层可以将庞大复杂的问题，转换未若干较小的局部问题
- 物理层
    ![alt text](/计算机网络/picture/{F2A859F1-C121-473A-9A40-458CC7D056F3}.png)
    > 传输媒体不是物理层
    > 传输信号并不是方波信号，这里只是为了更好理解
- 数据链路层
    ![alt text](/计算机网络/picture/{F90D8F1C-31F0-4AC7-A4E6-87B44F7316A8}.png)
- 网络层
    ![alt text](/计算机网络/picture/{78FF4C6E-5352-47AD-B420-B8A7A03D7672}.png)
- 运输层
    ![alt text](/计算机网络/picture/{780F59E6-9E7B-46FF-A3B6-648FF1F940C1}.png)
    ![alt text](/计算机网络/picture/{3469CE87-E2F2-4880-A53D-0E9A395FBC73}.png)
- 应用层
    ![alt text](/计算机网络/picture/{E82EC19B-C31F-443B-9032-7F433EA46B02}.png)
![alt text](/计算机网络/picture/{ACDB6A3D-A638-4F55-B21E-0EF8B23BA084}.png)
### 3.计算机网络体系结构分层思想举例
[视频解析](https://www.bilibili.com/video/BV1c4411d7jb/?p=9&share_source=copy_web&vd_source=f5c1e5993fe1126704d862f2c39942d1)
### 4.计算机网络体系结构中的专用术语
1. 实体
    ![alt text](/计算机网络/picture/{BF058184-C6DD-4E16-AFB2-F97122911457}.png)
2. 协议
    ![alt text](/计算机网络/picture/{24D3C768-2FE0-4CD6-90CD-166D7460E99A}.png)
    > 称为逻辑通信，是因为这种通信并不存在，只是我们假设出来的一种通信，目的在于方便研究体系结构中的某一层，而不用考虑其他层
    1. 语法
        ![alt text](/计算机网络/picture/{BEFA48B5-309C-4D7C-922A-844E4D3D7A4B}.png)
    2. 语义
        定义收发双方所要完成的操作  
        - 例如：主机浏览器进程向web服务器进程发出请求报文，服务器收到请求报文后解析完成，将所请求的内容数据打包为响应报文发回给主机，并由主机浏览器解析显示
    3. 同步
        ![alt text](/计算机网络/picture/{D20B7F01-F1B8-42BA-BE80-05031378E63C}.png)
3. 服务
    ![alt text](/计算机网络/picture/{131BA6DA-A933-49CF-8F58-E38AF7ACE91C}.png)
    - 服务访问点
        ![alt text](/计算机网络/picture/{71350F12-DA79-4D05-93F2-4D3628ABF837}.png)
    - 协议数据单元PDU、服务数据单元SDU
        ![alt text](/计算机网络/picture/{F5E3BF45-014A-4063-8B8C-7D8470EEEE70}.png)

# 第二章 物理层

## 一、物理层的基本概念
