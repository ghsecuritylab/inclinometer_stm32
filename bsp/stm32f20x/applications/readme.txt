**************************************************readme***********************************************************
2018.06.22 
1 �޸�finsh������������ڣ��ɴ���1��Ϊ����2  (keil 5.14)
                  TXD              RXD
  ����1          PA9��PIN68��     PA10��PIN69��   
  ����2          PA2��PIN25��     PA3��PIN26��
  �޸�uart2��Ϊfinsh���豸�����������޸ģ����⻹��һЩ���ڵĳ�ʼ��,uartʱ�����߹ܽ��жϵ�����
  a // <o> Console on USART: <0=> no console <1=>USART 1 <2=>USART 2 <3=> USART 3
    // 	<i>Default: 1
    //markoi #define STM32_CONSOLE_USART		1
    #define STM32_CONSOLE_USART		2 //markoi
  
  b /* SECTION: Device System */
    /* Using Device System */
    #define RT_USING_DEVICE
    //markoi #define RT_USING_UART1
     #define RT_USING_UART2 //markoi

  c #ifdef RT_USING_FINSH
	/* init finsh */
	finsh_system_init();
    //markoi finsh_set_device("uart1");
    finsh_set_device("uart2"); //markoi
    #endif


2018.06.23
1 ��������ָʾ��

   D8     LED1      PA0(PIN23)         workstatus LED
   D7     LED2      PA1(PIN24)         
   
2 EEPROM������д
  ������ַ
  �������ݽṹ
     �����Ƶѡ��    bool
	 ��Ƶ            unsigned int 32bit   ��λ HZ
	 �ο�բ��ʱ��    unsigned short 16bit ��λ 1mS
	 ����Ƶ��ѡ��    bool
	 
2018.06.25
1��201806251624���ݣ� ����finsh�豸uart2 
2 ΪLED�������ӹ��Ӻ���
3 ��finsh�豸uart1Ϊuart2,׼����uart2��Ϊ������λ��������շ�����
  uart2�жϽ���

2018.07.02
1 uart2����������λ������(�ο�RT�ֲ��ڵ����µ�����#ȱ��ʼ���ɲο����硰�����շ������̣��������⡱)�����ٷ�http://www.cmsoft.cn
  ��Σ�ֻ���յ����Ρ���������©����������д�����޸ġ�ͬʱ���Ǵ��ڲ���ֱ�Ӷ�д�����⡣
  
2018.08.01
1 ���Ӷ�ʱ��
  ��ʼ������
  
2018.11.05
�ϴ���github
  
  

	 
	 
  
  

