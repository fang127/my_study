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
物理层是计算机网络的基础，负责在不同计算机之间传输数据比特流。
![alt text](/计算机网络/picture/{21CD4498-5AA2-47B4-B438-4BBC0E8A1699}.png)

## 二、物理层下的传输媒体
传输媒体并不属于计算机网络体系结构中的任何一层，其是物理层之下的东西。
### 1.导引型传输媒体
1. 同轴电缆
    ![alt text](/计算机网络/picture/{3CAC1D7E-3256-4DC6-AB1C-9B738FF2B943}.png)
2. 双绞线
    ![alt text](/计算机网络/picture/{4415F149-F3EA-4E74-A10C-A8D10D2339B5}.png)
3. 光纤
    ![alt text](/计算机网络/picture/{C5BA1F71-44F1-433B-9712-119CC99DCF16}.png)
    ![alt text](/计算机网络/picture/{EDB693D2-FE3F-4F99-8340-F782A33A5B79}.png)
4. 电力线
    ![alt text](/计算机网络/picture/{5A8547F9-6151-4D16-8AD8-8F0C63021E66}.png)
### 2.非导引型传输媒体
1. 无线电波
    ![alt text](/计算机网络/picture/{F2A7C47E-DE5F-45DF-A9B6-5B77B47B7388}.png)
2. 微波
    ![alt text](/计算机网络/picture/{BF4DA629-7DF6-40AE-8358-6F70D18EBD41}.png)
3. 红外线
    ![alt text](/计算机网络/picture/{D049252D-9868-42B6-A103-57A15CAC90A0}.png)
4. 可见光
    Lifi

## 三、传输方式
### 1.串行传输和并行传输
![alt text](/计算机网络/picture/{0EB560AA-D350-4F37-9E40-F07A5FAD4264}.png)
并行传输一次是串行的n倍，但是价格高，计算机之间传输一般为串行，计算机内部传输是通过总线的并行
### 2.同步传输和异步传输
![alt text](/计算机网络/picture/{DD8DFD8A-5D74-444E-AD95-84E904B878BF}.png)
### 3.单工、半双工、全双工
![alt text](/计算机网络/picture/{6672A569-7127-4C86-A2E7-DCBF6A237EEE}.png)

## 四、编码与调制
![alt text](/计算机网络/picture/{00B61463-AC3E-4B21-B91B-AC1F11D00854}.png)
![alt text](/计算机网络/picture/{5357460F-E84E-4BA0-AB50-EB0A3A7EF6F3}.png)
### 1.编码
1. 不归零编码
![alt text](/计算机网络/picture/{FA64E1CB-3B33-4785-B3A1-FAFB42987A0B}.png)
> 不归零编码存在同步问题，计算机网络一般不采用
2. 归零编码
![alt text](/计算机网络/picture/{3B868390-0CA3-41E2-8322-01A093C45E44}.png)
> 自同步，但编码效率低
3. 曼彻斯特编码
![alt text](/计算机网络/picture/{1F154463-33E3-4AF5-8B0E-E4A9726B3130}.png)
- 例子
    ![alt text](/计算机网络/picture/{E922F7CE-E0CA-47C6-9D67-50E27BD44A75}.png)
### 2.调制
1. 基本调制
![alt text](/计算机网络/picture/{26AB0A49-1ED1-4785-8607-162D43DF0DF0}.png)
2. 混合调制
![alt text](/计算机网络/picture/{629F2DA9-3175-441C-82D0-A908089688FB}.png)
![alt text](/计算机网络/picture/{2923E153-383A-4D8A-B1D8-ED7688D81C5A}.png)
![alt text](/计算机网络/picture/{0D5ECAC3-1077-4A41-BFA9-D57224BB7A1A}.png)

## 五、信道的极限容量
![alt text](/计算机网络/picture/{FF94FF5A-7C4B-4CF8-95A7-08003D2B9D53}.png)
![alt text](/计算机网络/picture/{4103E00B-506A-4B9F-83E6-4A1A0DC5B8CC}.png)
![alt text](/计算机网络/picture/{0B01ED96-C581-4FC1-9215-9C00529F8B8B}.png)
![alt text](/计算机网络/picture/{5AFC2CFD-3ECF-49C3-8B3A-6A919DDA2C69}.png)

# 第三章、数据链路层

## 一、数据链路层概述
![alt text](/计算机网络/picture/{B1BF3B35-9790-4F23-8BE3-0D46CE19D955}.png)
![alt text](/计算机网络/picture/{B00D195D-A695-4EBF-B90E-4B00A2F85510}.png)
### 三个重要问题（点对点的数据链路层）
1. 封装成帧
    ![alt text](/计算机网络/picture/{737A09A2-0AEC-4C9D-BA7E-0225D4E5546E}.png)
2. 差错检测
    帧在传输过程中出现误码的处理措施。    
    ![alt text](/计算机网络/picture/{B2FDF7E3-EF0D-46E3-B8BC-EB65CEA03A8B}.png)
    > 发送方在帧尾封装一个检错码，接收方接收后检测帧中是否有误码
3. 可靠传输
    尽管误码不可完全避免，但若可以实现发送方发送什么，接收方就能接收到什么，就称为可靠传输
    > 接收方检测出有误码，则接收方会丢弃（向上层提供不可靠服务，直接丢弃，不会有其他措施）
    > 其他措施，来确保可以重新收到被丢弃的帧的副本（可靠服务）  
使用广播信道的数据链路层（共享式局域网）会有其他的问题（编址问题，传输给哪个节点？碰撞问题，怎么避免信号产生碰撞）。
![alt text](/计算机网络/picture/{FF93DA78-B79B-4A39-ABDC-E5D775F9DEB2}.png)  

## 二、封装成帧
![alt text](/计算机网络/picture/{E3F6C88C-A2BF-4FBC-AC87-1BA2AF19580D}.png)  
![alt text](/计算机网络/picture/{EFE1212D-CFF7-4629-A939-09A24664F48F}.png)
> 有的数据链路层并不会在帧头、尾加上帧定界，而是在物理层加上前、后导码的方式  
> 如果上次传输给数据链路层的协议数据单元内有帧定界的编码，可以通过在内部插入0或者转移字符的方式传输，接收方在收到之后，会进行去除转义字符或0的操作，恢复数据  
> 为了提高帧的传输效率，应使帧的数据部分的长度尽可能大些  
> 但考虑差错控制等因素，每一种数据链路层协议都规定了帧的数据部分的长度上限，即最大传送单元MTU  
![alt text](/计算机网络/picture/{26295776-CBBA-4611-B103-6873669BC645}.png)

## 三、差错检测
![alt text](/计算机网络/picture/{99244012-3943-48E0-A612-6F6AF983B6C3}.png)  
1. 奇偶校验  
![alt text](/计算机网络/picture/{67219E68-B642-4958-863F-5296435B9B53}.png)  
2. 循环冗余校验CRC（Cyclic Redundancy Check）
![alt text](/计算机网络/picture/{6484E105-C42D-47DC-AD5B-E709C264C0D6}.png)
![alt text](/计算机网络/picture/{FCC376EF-3B80-40A0-8D1D-6CEC6988EEF9}.png)
- 例子  
![alt text](/计算机网络/picture/{07165B67-47E5-4D08-8F68-07D3C42E2674}.png)
![alt text](/计算机网络/picture/{6AB4A25F-BCB6-4A65-831F-892483E2F2AA}.png)
> ![alt text](/计算机网络/picture/{AB60BE28-A383-45DC-B43D-80FA6CE273FE}.png)

## 四、可靠传输的概念
![alt text](/计算机网络/picture/{6922D9C5-B361-46B5-BB2E-8C1B1A3869B5}.png)  
> 一般情况下，有线链路误码率比较低，为了减少开销，并不要求数据链路层向上提供可靠传输服务。即使出现了误码，可靠传输的问题由上层处理
> 无线链路易受干扰，误码率较高，因此要求数据链路层必须向上层提供可靠传输服务
### 出现误码的情况
1. 比特差错
    0变成1，1变成0
2. 分组丢失
    由于误码，接收方丢弃该帧
3. 分组重复
    发送方由于没有收到确认帧，重发了该帧
4. 分组失序
    最先发送的分组未必最先到达
> 分组丢失、分组重复、分组失序，一般不会出现在数据链路层
> 可靠传输服务并不仅局限于数据链路层，其他各层也可以选择实现可靠传输服务
![alt text](/计算机网络/picture/{9799A88C-F947-4106-ABE1-17FAC4217AAE}.png)

## 五、可靠传输的实现机制--停止等待协议SW
又称为自动重传请求ARQ协议
![alt text](/计算机网络/picture/{43A6FA76-0F2A-4317-B269-3C389F7F4468}.png)
### 1.基本思想
- 发送方发送一帧后，停止发送，等待接收方的确认  
- 若发送方收到接收方的确认分组，则发送方发送下一帧  
- 若发送方在规定时间内没有收到确认分组或收到否认分组，则重发该帧  
![alt text](/计算机网络/picture/{8A36FD2F-31A7-4442-BE1F-D1964F2BDC31}.png)
> 接收方发送的确认分组或否认分组也可能丢失或延迟发送给发送方  
    解决办法：给每一帧加上序号  
    ![alt text](/计算机网络/picture/{2A9A1E3B-61CE-4E95-BC46-F54B7573DA4F}.png)  
    ![alt text](/计算机网络/picture/{0FD40E62-F45C-4AFE-A562-0DC0BE9FE023}.png)
### 2.注意事项
![alt text](/计算机网络/picture/{5D01ABD5-FA33-415E-8BC7-EFA037A471AA}.png)
### 3.信道利用率
![alt text](/计算机网络/picture/{5C5EB746-F049-42C3-B798-489624723883}.png)

## 六、可靠传输的实现机制--回退N重传协议GBN
![alt text](/计算机网络/picture/{4FD1BBE9-752F-4C1D-AB21-8003F6DF2B51}.png)
> 发送方可以连续发送多帧，而不必等待每一帧的确认
### 1.基本思想
- 发送方维护一个发送窗口，窗口大小为N
- 发送窗口不可以超过窗口尺寸N
- 发送方可以连续发送N帧，而不必等待每一帧的确认
![alt text](/计算机网络/picture/{A8EE0806-282A-464E-889D-DEF9E96C83EA}.png)
- 采用累计确认，即使确认分组丢失，发送方也能不必重传
![alt text](/计算机网络/picture/{D62C94C4-C4A0-41AE-8B70-9A42F9DC0901}.png)
![alt text](/计算机网络/picture/{E2E82992-5E26-46C9-9BDE-63ED3BC7BC82}.png)
> 由于回退N帧协议的特性，当通信线路质量不好时，其信道利用率并不比停止-等待协议高
### 2.注意事项
![alt text](/计算机网络/picture/{0D19FCA7-272A-4CC0-88DC-380221D9A2D3}.png)
- 例子
    ![alt text](/计算机网络/picture/{0323F320-A7AB-40ED-A135-EEE6A0981FFE}.png)

## 七、可靠传输的实现机制--选择重传协议SR
![alt text](/计算机网络/picture/{3242FA11-98ED-49A5-81C1-3B85138BDA7E}.png)
### 1.基本思想
- 发送方维护一个发送窗口，窗口大小为N
- 发送窗口不可以超过窗口尺寸N
- 发送方可以连续发送N帧，而不必等待每一帧的确认
- 接收方维护一个接收窗口，窗口大小为N
- 接收窗口不可以超过窗口尺寸N
![alt text](/计算机网络/picture/{51C9F276-0D30-4C50-AA39-3B87D94D1721}.png)

![alt text](/计算机网络/picture/{8A97E40A-31B1-4BE7-8D36-11833D617E58}.png)

- 例子
    ![alt text](/计算机网络/picture/{6F6D2E9F-A401-43C8-BF91-20B12E2006C3}.png)

## 八、点对点协议PPP
Point-to-Point Protocol，点到点协议，工作于数据链路层，在链路层上传输网络层协议前验证链路的对端，主要用于在全双工的同异步链路上进行点到点的数据传输。  
PPP主要是用来通过拨号或专线方式在两个网络节点之间建立连接、发送数据。PPP是各类型主机、网桥和路由器之间简单连接的一种解决方案。在RFC1661中有详细的描述。PPP协议是目前广域网上应用最广泛的协议之一，它的优点在于简单、具备用户验证能力、可以解决IP分配等。  
PPP协议是IETF在1992年制定的。经过1993年和1994年的修订，在1994年就已成为互联网的正式标准。  
![alt text](/计算机网络/picture/{01D6813E-E84D-4164-84CD-92FD5036DF3E}.png)  
### 1.PPP协议的组成
PPP协议主要由三个部分组成：
1. 帧封装协议
2. 链路控制协议LCP
3. 一套网络控制协议NCPs
![alt text](/计算机网络/picture/{32289D21-34D7-4DFF-8D13-1B838854F439}.png)
### 2.PPP协议的帧格式
![alt text](/计算机网络/picture/{2DF20C13-BEE4-4834-B746-84548E37BE63}.png) 
1. 透明传输 
![alt text](/计算机网络/picture/{1C41CD8F-0C77-4273-9AFF-4D4CE7104AEA}.png)  
![alt text](/计算机网络/picture/{5105FF88-92F1-436D-AF53-04177AC07EF5}.png)  
![alt text](/计算机网络/picture/{A2379610-1744-4453-9727-F95B49B627DD}.png)
2. 差错检测
![alt text](/计算机网络/picture/{92DB0A50-2CEA-473E-A83D-1E0ADB6B00FA}.png)
3. 工作状态
![alt text](/计算机网络/picture/{53E7C14F-3131-4BF2-968D-6D962826307B}.png)