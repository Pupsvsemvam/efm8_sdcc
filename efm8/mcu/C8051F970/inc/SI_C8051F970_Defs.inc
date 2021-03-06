;------------------------------------------------------------------------------
; Copyright 2014 Silicon Laboratories, Inc.
; All rights reserved. This program and the accompanying materials
; are made available under the terms of the Silicon Laboratories End User
; License Agreement which accompanies this distribution, and is available at
; http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
; Original content and implementation provided by Silicon Laboratories.
;------------------------------------------------------------------------------
;Supported Devices:
;  C8051F970_GM
;  C8051F971_GM
;  C8051F972_GM
;  C8051F973_GM
;  C8051F974_GM
;  C8051F975_GM

;-----------------------------------------------------------------------------
; Register Definitions
;-----------------------------------------------------------------------------
ACC      DATA 0E0H; Accumulator                                      
ADC0AC   DATA 0BAH; ADC0 Accumulator Configuration                   
ADC0CF   DATA 097H; ADC0 Configuration                               
ADC0CN   DATA 0E8H; ADC0 Control                                     
ADC0GTH  DATA 0C4H; ADC0 Greater-Than High Byte                      
ADC0GTL  DATA 0C3H; ADC0 Greater-Than Low Byte                       
ADC0H    DATA 0D3H; ADC0 Data Word High Byte                         
ADC0L    DATA 0D2H; ADC0 Data Word Low Byte                          
ADC0LTH  DATA 0C6H; ADC0 Less-Than High Byte                         
ADC0LTL  DATA 0C5H; ADC0 Less-Than Low Byte                          
ADC0MX   DATA 0D4H; ADC0 Multiplexer Selection                       
ADC0PWR  DATA 0BBH; ADC0 Power Control                               
ADC0TK   DATA 0BCH; ADC0 Burst Mode Track Time                       
AMUX0P0  DATA 09AH; Port 0 Analog Multiplexer Control                
AMUX0P1  DATA 09BH; Port 1 Analog Multiplexer Control                
AMUX0P2  DATA 09CH; Port 2 Analog Multiplexer Control                
AMUX0P3  DATA 0A4H; Port 3 Analog Multiplexer Control                
AMUX0P4  DATA 0A5H; Port 4 Analog Multiplexer Control                
AMUX0P5  DATA 0A6H; Port 5 Analog Multiplexer Control                
B        DATA 0F0H; B Register                                       
CKCON    DATA 08EH; Clock Control                                    
CLKMODE  DATA 0F7H; Clock Mode                                       
CLKSEL   DATA 0A9H; Clock Select                                     
CRC0AUTO DATA 09EH; CRC0 Automatic Control                           
CRC0CN   DATA 084H; CRC0 Control                                     
CRC0CNT  DATA 09DH; CRC0 Automatic Flash Sector Count                
CRC0DAT  DATA 086H; CRC0 Data Output                                 
CRC0FLIP DATA 09FH; CRC0 Bit Flip                                    
CRC0IN   DATA 085H; CRC0 Data Input                                  
CS0CF    DATA 0AAH; Capacitive Sense 0 Configuration                 
CS0CN    DATA 0B0H; Capacitive Sense 0 Control                       
CS0DH    DATA 0EEH; Capacitive Sense 0 Data High Byte                
CS0DL    DATA 0EDH; Capacitive Sense 0 Data Low Byte                 
CS0MD1   DATA 0BDH; Capacitive Sense 0 Mode 1                        
CS0MD2   DATA 0BEH; Capacitive Sense 0 Mode 2                        
CS0MD3   DATA 0BFH; Capacitive Sense 0 Mode 3                        
CS0MX    DATA 0ABH; Capacitive Sense 0 Mux Channel Select            
CS0PM    DATA 096H; Capacitive Sense 0 Pin Monitor                   
CS0SE    DATA 0DEH; Capacitive Sense 0 Auto Scan End Channel         
CS0SS    DATA 0DDH; Capacitive Sense 0 Auto Scan Start Channel       
CS0THH   DATA 0FEH; Capacitive Sense 0 Comparator Threshold High Byte
CS0THL   DATA 0FDH; Capacitive Sense 0 Comparator Threshold Low Byte 
DEVICEID DATA 0E1H; Device Identification                            
DMA0BUSY DATA 091H; DMA0 Busy                                        
DMA0EN   DATA 092H; DMA0 Channel Enable                              
DMA0INT  DATA 0E8H; DMA0 Full-Length Interrupt Flags                 
DMA0MINT DATA 088H; DMA0 Mid-Point Interrupt Flags                   
DMA0NAOH DATA 0CCH; Memory Address Offset High                       
DMA0NAOL DATA 0CBH; Memory Address Offset Low                        
DMA0NBAH DATA 0CAH; Memory Base Address High                         
DMA0NBAL DATA 0C9H; Memory Base Address Low                          
DMA0NCF  DATA 0D8H; DMA0 Channel Configuration                       
DMA0NSZH DATA 0CEH; Memory Transfer Size High                        
DMA0NSZL DATA 0CDH; Memory Transfer Size Low                         
DMA0SEL  DATA 094H; DMA0 Channel Select                              
DPH      DATA 083H; Data Pointer High                                
DPL      DATA 082H; Data Pointer Low                                 
EIE1     DATA 0E6H; Extended Interrupt Enable 1                      
EIE2     DATA 0E7H; Extended Interrupt Enable 2                      
EIP1     DATA 0F6H; Extended Interrupt Priority 1                    
EIP2     DATA 0F7H; Extended Interrupt Priority 2                    
EMI0CN   DATA 0B9H; External Memory Interface Control                
FLKEY    DATA 0B7H; Flash Lock and Key                               
FLSCL    DATA 0B6H; Flash Scale                                      
FLWR     DATA 0E5H; Flash Write Only                                 
I2C0CN   DATA 0ACH; I2C0 Control                                     
I2C0DIN  DATA 0A5H; I2C0 Received Data                               
I2C0DOUT DATA 0A4H; I2C0 Transmit Data                               
I2C0SLAD DATA 0ADH; I2C0 Slave Address                               
I2C0STAT DATA 0F8H; I2C0 Status                                      
IE       DATA 0A8H; Interrupt Enable                                 
IP       DATA 0B8H; Interrupt Priority                               
IT01CF   DATA 0DEH; INT0/INT1 Configuration                          
MAC0ACC0 DATA 0D2H; Accumulator Byte 0                               
MAC0ACC1 DATA 0D3H; Accumulator Byte 1                               
MAC0ACC2 DATA 0D4H; Accumulator Byte 2                               
MAC0ACC3 DATA 0D5H; Accumulator Byte 3                               
MAC0AH   DATA 0ABH; Operand A High Byte                              
MAC0AL   DATA 0AAH; Operand A Low Byte                               
MAC0BH   DATA 0AFH; Operand B High Byte                              
MAC0BL   DATA 0AEH; Operand B Low Byte                               
MAC0CF0  DATA 0C0H; MAC0 Configuration 0                             
MAC0CF1  DATA 0C4H; MAC0 Configuration 1                             
MAC0CF2  DATA 0C5H; MAC0 Configuration 2                             
MAC0INTE DATA 0C1H; MAC0 Interrupt Enable                            
MAC0ITER DATA 0D7H; Iteration Counter                                
MAC0OVF  DATA 0D6H; Accumulator Overflow Byte                        
MAC0STA  DATA 0CFH; MAC0 Status                                      
OSCICL   DATA 0AFH; High Frequency Oscillator Calibration            
OSCICN   DATA 0B2H; High Frequency Oscillator Control                
OSCXCN   DATA 0B1H; External Oscillator Control                      
P0       DATA 080H; Port 0 Pin Latch                                 
P0DRV    DATA 099H; Port 0 Drive Strength                            
P0MASK   DATA 08BH; Port 0 Mask                                      
P0MAT    DATA 0F4H; Port 0 Match                                     
P0MDIN   DATA 0ECH; Port 0 Input Mode                                
P0MDOUT  DATA 0D9H; Port 0 Output Mode                               
P0SKIP   DATA 0B6H; Port 0 Skip                                      
P1       DATA 090H; Port 1 Pin Latch                                 
P1DRV    DATA 09AH; Port 1 Drive Strength                            
P1MASK   DATA 08CH; Port 1 Mask                                      
P1MAT    DATA 0F5H; Port 1 Match                                     
P1MDIN   DATA 0EDH; Port 1 Input Mode                                
P1MDOUT  DATA 0DCH; Port 1 Output Mode                               
P1SKIP   DATA 0C6H; Port 1 Skip                                      
P2       DATA 0A0H; Port 2 Pin Latch                                 
P2DRV    DATA 09BH; Port 2 Drive Strength                            
P2MASK   DATA 084H; Port 2 Mask                                      
P2MAT    DATA 085H; Port 2 Match                                     
P2MDIN   DATA 0EEH; Port 2 Input Mode                                
P2MDOUT  DATA 0DDH; Port 2 Output Mode                               
P2SKIP   DATA 0C7H; Port 2 Skip                                      
P3       DATA 0E1H; Port 3 Pin Latch                                 
P3DRV    DATA 09CH; Port 3 Drive Strength                            
P3MDIN   DATA 0EFH; Port 3 Input Mode                                
P3MDOUT  DATA 0DFH; Port 3 Output Mode                               
P4       DATA 0E2H; Port 4 Pin Latch                                 
P4DRV    DATA 0B9H; Port 4 Drive Strength                            
P4MDIN   DATA 0F1H; Port 4 Input Mode                                
P4MDOUT  DATA 0C3H; Port 4 Output Mode                               
P5       DATA 0E3H; Port 5 Pin Latch                                 
P5DRV    DATA 09DH; Port 5 Drive Strength                            
P5MDIN   DATA 0F2H; Port 5 Input Mode                                
P5MDOUT  DATA 0FFH; Port 5 Output Mode                               
P6       DATA 0E4H; Port 6 Pin Latch                                 
P6MDIN   DATA 097H; Port 6 Input Mode                                
PCA0CN   DATA 0D8H; PCA Control                                      
PCA0CPH0 DATA 0FCH; PCA Channel 0 Capture Module High Byte           
PCA0CPH1 DATA 0EAH; PCA Channel 1 Capture Module High Byte           
PCA0CPH2 DATA 0ECH; PCA Channel 2 Capture Module High Byte           
PCA0CPL0 DATA 0FBH; PCA Channel 0 Capture Module Low Byte            
PCA0CPL1 DATA 0E9H; PCA Channel 1 Capture Module Low Byte            
PCA0CPL2 DATA 0EBH; PCA Channel 2 Capture Module Low Byte            
PCA0CPM0 DATA 0DAH; PCA Channel 0 Capture/Compare Mode 0             
PCA0CPM1 DATA 0DBH; PCA Channel 1 Capture/Compare Mode               
PCA0CPM2 DATA 0DCH; PCA Channel 2 Capture/Compare Mode               
PCA0H    DATA 0FAH; PCA Counter/Timer High Byte                      
PCA0L    DATA 0F9H; PCA Counter/Timer Low Byte                       
PCA0MD   DATA 0D9H; PCA Mode                                         
PCA0PWM  DATA 0DFH; PCA PWM Configuration                            
PCLKEN   DATA 0F6H; Low Power Peripheral Clock Enable                
PCON     DATA 087H; Power Control                                    
PMU0CF   DATA 0B5H; Power Management Unit Configuration              
PMU0FL   DATA 0CEH; Power Management Unit Flag                       
PMU0MD   DATA 0CFH; Power Management Unit Mode                       
PSCTL    DATA 08FH; Program Store Control                            
PSW      DATA 0D0H; Program Status Word                              
REF0CN   DATA 0D1H; Voltage Reference Control                        
REG0CN   DATA 0C9H; Voltage Regulator Control                        
REVID    DATA 0E2H; Revision Identifcation                           
RSTSRC   DATA 0EFH; Reset Source                                     
RTC0ADR  DATA 0ACH; RTC Address                                      
RTC0DAT  DATA 0ADH; RTC Data                                         
SBUF0    DATA 099H; UART0 Serial Port Data Buffer                    
SCON0    DATA 098H; UART0 Serial Port Control                        
SFRLAST  DATA 0B3H; SFR Page Last                                    
SFRNEXT  DATA 0F3H; SFR Page Next                                    
SFRPAGE  DATA 0A7H; SFR Page                                         
SFRPGCN  DATA 0A6H; SFR Page Control                                 
SMB0ADM  DATA 0F5H; SMBus 0 Slave Address Mask                       
SMB0ADR  DATA 0F4H; SMBus 0 Slave Address                            
SMB0CF   DATA 0C1H; SMBus 0 Configuration                            
SMB0CN   DATA 0C0H; SMBus 0 Control                                  
SMB0DAT  DATA 0C2H; SMBus 0 Data                                     
SP       DATA 081H; Stack Pointer                                    
SPI0CFG  DATA 0A1H; SPI0 Configuration                               
SPI0CKR  DATA 0A2H; SPI0 Clock Rate                                  
SPI0CN   DATA 0F8H; SPI0 Control                                     
SPI0DAT  DATA 0A3H; SPI0 Data                                        
TCON     DATA 088H; Timer 0/1 Control                                
TH0      DATA 08CH; Timer 0 High Byte                                
TH1      DATA 08DH; Timer 1 High Byte                                
TL0      DATA 08AH; Timer 0 Low Byte                                 
TL1      DATA 08BH; Timer 1 Low Byte                                 
TMOD     DATA 089H; Timer 0/1 Mode                                   
TMR2CN   DATA 0C8H; Timer 2 Control                                  
TMR2H    DATA 0CDH; Timer 2 High Byte                                
TMR2L    DATA 0CCH; Timer 2 Low Byte                                 
TMR2RLH  DATA 0CBH; Timer 2 Reload High Byte                         
TMR2RLL  DATA 0CAH; Timer 2 Reload Low Byte                          
TMR3CN   DATA 091H; Timer 3 Control                                  
TMR3H    DATA 095H; Timer 3 High Byte                                
TMR3L    DATA 094H; Timer 3 Low Byte                                 
TMR3RLH  DATA 093H; Timer 3 Reload High Byte                         
TMR3RLL  DATA 092H; Timer 3 Reload Low Byte                          
TOFFH    DATA 08EH; Temperature Sensor Offset High                   
TOFFL    DATA 08DH; Temperature Sensor Offset Low                    
VDM0CN   DATA 0FFH; VDD Supply Monitor Control                       
XBR0     DATA 095H; Port I/O Crossbar 0                              
XBR1     DATA 096H; Port I/O Crossbar 1                              

;------------------------------------------------------------------------------
; 16-bit Register Definitions (may not work on all compilers)
;------------------------------------------------------------------------------
ADC0GT  DATA 0C3H ; ADC0 Greater-Than Low Byte                      
ADC0    DATA 0D2H ; ADC0 Data Word Low Byte                         
ADC0LT  DATA 0C5H ; ADC0 Less-Than Low Byte                         
CS0D    DATA 0EDH ; Capacitive Sense 0 Data Low Byte                
CS0TH   DATA 0FDH ; Capacitive Sense 0 Comparator Threshold Low Byte
DMA0NAO DATA 0CBH ; Memory Address Offset Low                       
DMA0NBA DATA 0C9H ; Memory Base Address Low                         
DMA0NSZ DATA 0CDH ; Memory Transfer Size Low                        
DP      DATA 082H ; Data Pointer Low                                
MAC0A   DATA 0AAH ; Operand A Low Byte                              
MAC0B   DATA 0AEH ; Operand B Low Byte                              
PCA0CP0 DATA 0FBH ; PCA Channel 0 Capture Module Low Byte           
PCA0CP1 DATA 0E9H ; PCA Channel 1 Capture Module Low Byte           
PCA0CP2 DATA 0EBH ; PCA Channel 2 Capture Module Low Byte           
PCA0    DATA 0F9H ; PCA Counter/Timer Low Byte                      
TMR2    DATA 0CCH ; Timer 2 Low Byte                                
TMR2RL  DATA 0CAH ; Timer 2 Reload Low Byte                         
TMR3    DATA 094H ; Timer 3 Low Byte                                
TMR3RL  DATA 092H ; Timer 3 Reload Low Byte                         
TOFF    DATA 08DH ; Temperature Sensor Offset Low                   

;------------------------------------------------------------------------------
; Indirect Register Definitions
;------------------------------------------------------------------------------
ALARM0     EQU 008H ; RTC Alarm Programmed Value 0        
ALARM1     EQU 009H ; RTC Alarm Programmed Value 1        
ALARM2     EQU 00AH ; RTC Alarm Programmed Value 2        
ALARM3     EQU 00BH ; RTC Alarm Programmed Value 3        
CAPTURE0   EQU 000H ; RTC Timer Capture 0                 
CAPTURE1   EQU 001H ; RTC Timer Capture 1                 
CAPTURE2   EQU 002H ; RTC Timer Capture 2                 
CAPTURE3   EQU 003H ; RTC Timer Capture 3                 
DMA0NAOH0  EQU 000H ; Channel 0 Memory Address Offset High
DMA0NAOH1  EQU 001H ; Channel 1 Memory Address Offset High
DMA0NAOH2  EQU 002H ; Channel 2 Memory Address Offset High
DMA0NAOH3  EQU 003H ; Channel 3 Memory Address Offset High
DMA0NAOH4  EQU 004H ; Channel 4 Memory Address Offset High
DMA0NAOH5  EQU 005H ; Channel 5 Memory Address Offset High
DMA0NAOH6  EQU 006H ; Channel 6 Memory Address Offset High
DMA0NAOL0  EQU 000H ; Channel 0 Memory Address Offset     
DMA0NAOL1  EQU 001H ; Channel 1 Memory Address Offset     
DMA0NAOL2  EQU 002H ; Channel 2 Memory Address Offset     
DMA0NAOL3  EQU 003H ; Channel 3 Memory Address Offset     
DMA0NAOL4  EQU 004H ; Channel 4 Memory Address Offset     
DMA0NAOL5  EQU 005H ; Channel 5 Memory Address Offset     
DMA0NAOL6  EQU 006H ; Channel 6 Memory Address Offset     
DMA0NBAH0  EQU 000H ; Channel 0 Memory Base Address High  
DMA0NBAH1  EQU 001H ; Channel 1 Memory Base Address High  
DMA0NBAH2  EQU 002H ; Channel 2 Memory Base Address High  
DMA0NBAH3  EQU 003H ; Channel 3 Memory Base Address High  
DMA0NBAH4  EQU 004H ; Channel 4 Memory Base Address High  
DMA0NBAH5  EQU 005H ; Channel 5 Memory Base Address High  
DMA0NBAH6  EQU 006H ; Channel 6 Memory Base Address High  
DMA0NBAL0  EQU 000H ; Channel 0 Memory Base Address       
DMA0NBAL1  EQU 001H ; Channel 1 Memory Base Address       
DMA0NBAL2  EQU 002H ; Channel 2 Memory Base Address       
DMA0NBAL3  EQU 003H ; Channel 3 Memory Base Address       
DMA0NBAL4  EQU 004H ; Channel 4 Memory Base Address       
DMA0NBAL5  EQU 005H ; Channel 5 Memory Base Address       
DMA0NBAL6  EQU 006H ; Channel 6 Memory Base Address       
DMA0NCF0   EQU 000H ; DMA0 Channel 0 Configuration        
DMA0NCF1   EQU 001H ; DMA0 Channel 1 Configuration        
DMA0NCF2   EQU 002H ; DMA0 Channel 2 Configuration        
DMA0NCF3   EQU 003H ; DMA0 Channel 3 Configuration        
DMA0NCF4   EQU 004H ; DMA0 Channel 4 Configuration        
DMA0NCF5   EQU 005H ; DMA0 Channel 5 Configuration        
DMA0NCF6   EQU 006H ; DMA0 Channel 6 Configuration        
DMA0NSZH0  EQU 000H ; Channel 0 Memory Transfer Size High 
DMA0NSZH1  EQU 001H ; Channel 1 Memory Transfer Size High 
DMA0NSZH2  EQU 002H ; Channel 2 Memory Transfer Size High 
DMA0NSZH3  EQU 003H ; Channel 3 Memory Transfer Size High 
DMA0NSZH4  EQU 004H ; Channel 4 Memory Transfer Size High 
DMA0NSZH5  EQU 005H ; Channel 5 Memory Transfer Size High 
DMA0NSZH6  EQU 006H ; Channel 6 Memory Transfer Size High 
DMA0NSZL0  EQU 000H ; Channel 0 Memory Transfer Size      
DMA0NSZL1  EQU 001H ; Channel 1 Memory Transfer Size      
DMA0NSZL2  EQU 002H ; Channel 2 Memory Transfer Size      
DMA0NSZL3  EQU 003H ; Channel 3 Memory Transfer Size      
DMA0NSZL4  EQU 004H ; Channel 4 Memory Transfer Size      
DMA0NSZL5  EQU 005H ; Channel 5 Memory Transfer Size      
DMA0NSZL6  EQU 006H ; Channel 6 Memory Transfer Size      
RTC0CN     EQU 004H ; RTC Control                         
RTC0XCF    EQU 006H ; RTC Oscillator Configuration        
RTC0XCN    EQU 005H ; RTC Oscillator Control              

;------------------------------------------------------------------------------
; Bit Definitions
;------------------------------------------------------------------------------

; ACC 0xE0 (Accumulator)
ACC_ACC0 BIT ACC.0 ; Accumulator Bit 0
ACC_ACC1 BIT ACC.1 ; Accumulator Bit 1
ACC_ACC2 BIT ACC.2 ; Accumulator Bit 2
ACC_ACC3 BIT ACC.3 ; Accumulator Bit 3
ACC_ACC4 BIT ACC.4 ; Accumulator Bit 4
ACC_ACC5 BIT ACC.5 ; Accumulator Bit 5
ACC_ACC6 BIT ACC.6 ; Accumulator Bit 6
ACC_ACC7 BIT ACC.7 ; Accumulator Bit 7

; ADC0CN 0xE8 (ADC0 Control)
ADC0CN_ADCM0  BIT ADC0CN.0 ; Start of Conversion Mode Select Bit 0
ADC0CN_ADCM1  BIT ADC0CN.1 ; Start of Conversion Mode Select Bit 1
ADC0CN_ADCM2  BIT ADC0CN.2 ; Start of Conversion Mode Select Bit 2
ADC0CN_ADWINT BIT ADC0CN.3 ; Window Compare Interrupt Flag        
ADC0CN_ADBUSY BIT ADC0CN.4 ; ADC Busy                             
ADC0CN_ADINT  BIT ADC0CN.5 ; Conversion Complete Interrupt Flag   
ADC0CN_ADBMEN BIT ADC0CN.6 ; Burst Mode Enable                    
ADC0CN_ADEN   BIT ADC0CN.7 ; ADC Enable                           

; B 0xF0 (B Register)
B_B0 BIT B.0 ; B Register Bit 0
B_B1 BIT B.1 ; B Register Bit 1
B_B2 BIT B.2 ; B Register Bit 2
B_B3 BIT B.3 ; B Register Bit 3
B_B4 BIT B.4 ; B Register Bit 4
B_B5 BIT B.5 ; B Register Bit 5
B_B6 BIT B.6 ; B Register Bit 6
B_B7 BIT B.7 ; B Register Bit 7

; CS0CN 0xB0 (Capacitive Sense 0 Control)
CS0CN_CSCMPF  BIT CS0CN.0 ; CS0 Digital Comparator Interrupt Flag
CS0CN_CSPME   BIT CS0CN.1 ; CS0 Pin Monitor Event                
CS0CN_CSCMPEN BIT CS0CN.3 ; CS0 Digital Comparator Enable        
CS0CN_CSBUSY  BIT CS0CN.4 ; CS0 Busy                             
CS0CN_CSINT   BIT CS0CN.5 ; CS0 Interrupt Flag                   
CS0CN_CSEOS   BIT CS0CN.6 ; CS0 End of Scan Interrupt Flag       
CS0CN_CSEN    BIT CS0CN.7 ; CS0 Enable                           

; DMA0INT 0xE8 (DMA0 Full-Length Interrupt Flags)
DMA0INT_CH0I BIT DMA0INT.0 ; Channel 0 Full-Length Interrupt Flag
DMA0INT_CH1I BIT DMA0INT.1 ; Channel 1 Full-Length Interrupt Flag
DMA0INT_CH2I BIT DMA0INT.2 ; Channel 2 Full-Length Interrupt Flag
DMA0INT_CH3I BIT DMA0INT.3 ; Channel 3 Full-Length Interrupt Flag
DMA0INT_CH4I BIT DMA0INT.4 ; Channel 4 Full-Length Interrupt Flag
DMA0INT_CH5I BIT DMA0INT.5 ; Channel 5 Full-Length Interrupt Flag
DMA0INT_CH6I BIT DMA0INT.6 ; Channel 6 Full-Length Interrupt Flag

; DMA0MINT 0x88 (DMA0 Mid-Point Interrupt Flags)
DMA0MINT_CH0MI BIT DMA0MINT.0 ; Channel 0 Mid-Point Interrupt Flag
DMA0MINT_CH1MI BIT DMA0MINT.1 ; Channel 1 Mid-Point Interrupt Flag
DMA0MINT_CH2MI BIT DMA0MINT.2 ; Channel 2 Mid-Point Interrupt Flag
DMA0MINT_CH3MI BIT DMA0MINT.3 ; Channel 3 Mid-Point Interrupt Flag
DMA0MINT_CH4MI BIT DMA0MINT.4 ; Channel 4 Mid-Point Interrupt Flag
DMA0MINT_CH5MI BIT DMA0MINT.5 ; Channel 5 Mid-Point Interrupt Flag
DMA0MINT_CH6MI BIT DMA0MINT.6 ; Channel 6 Mid-Point Interrupt Flag

; DMA0NCF 0xD8 (DMA0 Channel Configuration)
DMA0NCF_PERIPH0 BIT DMA0NCF.0 ; Peripheral Transfer Select Bit 0
DMA0NCF_PERIPH1 BIT DMA0NCF.1 ; Peripheral Transfer Select Bit 1
DMA0NCF_PERIPH2 BIT DMA0NCF.2 ; Peripheral Transfer Select Bit 2
DMA0NCF_ENDIAN  BIT DMA0NCF.4 ; Data Transfer Endianness        
DMA0NCF_STALL   BIT DMA0NCF.5 ; Channel Stall                   
DMA0NCF_MIEN    BIT DMA0NCF.6 ; Mid-Point Interrupt Enable      
DMA0NCF_IEN     BIT DMA0NCF.7 ; Full-Length Interrupt Enable    

; I2C0STAT 0xF8 (I2C0 Status)
I2C0STAT_RD      BIT I2C0STAT.0 ; I2C Read       
I2C0STAT_WR      BIT I2C0STAT.1 ; I2C Write      
I2C0STAT_STOP    BIT I2C0STAT.2 ; Stop           
I2C0STAT_START   BIT I2C0STAT.3 ; Start          
I2C0STAT_NACK    BIT I2C0STAT.4 ; NACK           
I2C0STAT_I2C0INT BIT I2C0STAT.5 ; I2C Interrupt  
I2C0STAT_ACTIVE  BIT I2C0STAT.6 ; Bus Active     
I2C0STAT_HSMODE  BIT I2C0STAT.7 ; High Speed Mode

; IE 0xA8 (Interrupt Enable)
IE_EX0   BIT IE.0 ; External Interrupt 0 Enable
IE_ET0   BIT IE.1 ; Timer 0 Interrupt Enable   
IE_EX1   BIT IE.2 ; External Interrupt 1 Enable
IE_ET1   BIT IE.3 ; Timer 1 Interrupt Enable   
IE_ES0   BIT IE.4 ; UART0 Interrupt Enable     
IE_ET2   BIT IE.5 ; Timer 2 Interrupt Enable   
IE_ESPI0 BIT IE.6 ; SPI0 Interrupt Enable      
IE_EA    BIT IE.7 ; All Interrupts Enable      

; IP 0xB8 (Interrupt Priority)
IP_PX0   BIT IP.0 ; External Interrupt 0 Priority Control                        
IP_PT0   BIT IP.1 ; Timer 0 Interrupt Priority Control                           
IP_PX1   BIT IP.2 ; External Interrupt 1 Priority Control                        
IP_PT1   BIT IP.3 ; Timer 1 Interrupt Priority Control                           
IP_PS0   BIT IP.4 ; UART0 Interrupt Priority Control                             
IP_PT2   BIT IP.5 ; Timer 2 Interrupt Priority Control                           
IP_PSPI0 BIT IP.6 ; Serial Peripheral Interface (SPI0) Interrupt Priority Control

; MAC0CF0 0xC0 (MAC0 Configuration 0)
MAC0CF0_ANEGATE   BIT MAC0CF0.0 ; Negate A input             
MAC0CF0_BNEGATE   BIT MAC0CF0.1 ; Negate B input             
MAC0CF0_ACCNEGATE BIT MAC0CF0.2 ; Negate Accumulator Input   
MAC0CF0_ACCMD     BIT MAC0CF0.3 ; Accumulate Mode            
MAC0CF0_FRACMD    BIT MAC0CF0.4 ; Fractional Mode            
MAC0CF0_CLRACC    BIT MAC0CF0.5 ; Clear Accumulator          
MAC0CF0_SHIFTDIR  BIT MAC0CF0.6 ; Accumulator Shift Direction
MAC0CF0_SHIFTEN   BIT MAC0CF0.7 ; Accumulator Shift Control  

; P0 0x80 (Port 0 Pin Latch)
P0_B0 BIT P0.0 ; Port 0 Bit 0 Latch
P0_B1 BIT P0.1 ; Port 0 Bit 1 Latch
P0_B2 BIT P0.2 ; Port 0 Bit 2 Latch
P0_B3 BIT P0.3 ; Port 0 Bit 3 Latch
P0_B4 BIT P0.4 ; Port 0 Bit 4 Latch
P0_B5 BIT P0.5 ; Port 0 Bit 5 Latch
P0_B6 BIT P0.6 ; Port 0 Bit 6 Latch
P0_B7 BIT P0.7 ; Port 0 Bit 7 Latch

; P1 0x90 (Port 1 Pin Latch)
P1_B0 BIT P1.0 ; Port 1 Bit 0 Latch
P1_B1 BIT P1.1 ; Port 1 Bit 1 Latch
P1_B2 BIT P1.2 ; Port 1 Bit 2 Latch
P1_B3 BIT P1.3 ; Port 1 Bit 3 Latch
P1_B4 BIT P1.4 ; Port 1 Bit 4 Latch
P1_B5 BIT P1.5 ; Port 1 Bit 5 Latch
P1_B6 BIT P1.6 ; Port 1 Bit 6 Latch
P1_B7 BIT P1.7 ; Port 1 Bit 7 Latch

; P2 0xA0 (Port 2 Pin Latch)
P2_B0 BIT P2.0 ; Port 2 Bit 0 Latch
P2_B1 BIT P2.1 ; Port 2 Bit 1 Latch
P2_B2 BIT P2.2 ; Port 2 Bit 2 Latch
P2_B3 BIT P2.3 ; Port 2 Bit 3 Latch
P2_B4 BIT P2.4 ; Port 2 Bit 4 Latch
P2_B5 BIT P2.5 ; Port 2 Bit 5 Latch
P2_B6 BIT P2.6 ; Port 2 Bit 6 Latch
P2_B7 BIT P2.7 ; Port 2 Bit 7 Latch

; PCA0CN 0xD8 (PCA Control)
PCA0CN_CCF0 BIT PCA0CN.0 ; PCA Module 0 Capture/Compare Flag
PCA0CN_CCF1 BIT PCA0CN.1 ; PCA Module 1 Capture/Compare Flag
PCA0CN_CCF2 BIT PCA0CN.2 ; PCA Module 2 Capture/Compare Flag
PCA0CN_CR   BIT PCA0CN.6 ; PCA Counter/Timer Run Control    
PCA0CN_CF   BIT PCA0CN.7 ; PCA Counter/Timer Overflow Flag  

; PSW 0xD0 (Program Status Word)
PSW_PARITY BIT PSW.0 ; Parity Flag               
PSW_F1     BIT PSW.1 ; User Flag 1               
PSW_OV     BIT PSW.2 ; Overflow Flag             
PSW_RS0    BIT PSW.3 ; Register Bank Select Bit 0
PSW_RS1    BIT PSW.4 ; Register Bank Select Bit 1
PSW_F0     BIT PSW.5 ; User Flag 0               
PSW_AC     BIT PSW.6 ; Auxiliary Carry Flag      
PSW_CY     BIT PSW.7 ; Carry Flag                

; SCON0 0x98 (UART0 Serial Port Control)
SCON0_RI    BIT SCON0.0 ; Receive Interrupt Flag             
SCON0_TI    BIT SCON0.1 ; Transmit Interrupt Flag            
SCON0_RB8   BIT SCON0.2 ; Ninth Receive Bit                  
SCON0_TB8   BIT SCON0.3 ; Ninth Transmission Bit             
SCON0_REN   BIT SCON0.4 ; Receive Enable                     
SCON0_MCE   BIT SCON0.5 ; Multiprocessor Communication Enable
SCON0_SMODE BIT SCON0.7 ; Serial Port 0 Operation Mode       

; SMB0CN 0xC0 (SMBus 0 Control)
SMB0CN_SI      BIT SMB0CN.0 ; SMBus Interrupt Flag            
SMB0CN_ACK     BIT SMB0CN.1 ; SMBus Acknowledge               
SMB0CN_ARBLOST BIT SMB0CN.2 ; SMBus Arbitration Lost Indicator
SMB0CN_ACKRQ   BIT SMB0CN.3 ; SMBus Acknowledge Request       
SMB0CN_STO     BIT SMB0CN.4 ; SMBus Stop Flag                 
SMB0CN_STA     BIT SMB0CN.5 ; SMBus Start Flag                
SMB0CN_TXMODE  BIT SMB0CN.6 ; SMBus Transmit Mode Indicator   
SMB0CN_MASTER  BIT SMB0CN.7 ; SMBus Master/Slave Indicator    

; SPI0CN 0xF8 (SPI0 Control)
SPI0CN_SPIEN  BIT SPI0CN.0 ; SPI0 Enable            
SPI0CN_TXBMT  BIT SPI0CN.1 ; Transmit Buffer Empty  
SPI0CN_NSSMD0 BIT SPI0CN.2 ; Slave Select Mode Bit 0
SPI0CN_NSSMD1 BIT SPI0CN.3 ; Slave Select Mode Bit 1
SPI0CN_RXOVRN BIT SPI0CN.4 ; Receive Overrun Flag   
SPI0CN_MODF   BIT SPI0CN.5 ; Mode Fault Flag        
SPI0CN_WCOL   BIT SPI0CN.6 ; Write Collision Flag   
SPI0CN_SPIF   BIT SPI0CN.7 ; SPI0 Interrupt Flag    

; TCON 0x88 (Timer 0/1 Control)
TCON_IT0 BIT TCON.0 ; Interrupt 0 Type Select
TCON_IE0 BIT TCON.1 ; External Interrupt 0   
TCON_IT1 BIT TCON.2 ; Interrupt 1 Type Select
TCON_IE1 BIT TCON.3 ; External Interrupt 1   
TCON_TR0 BIT TCON.4 ; Timer 0 Run Control    
TCON_TF0 BIT TCON.5 ; Timer 0 Overflow Flag  
TCON_TR1 BIT TCON.6 ; Timer 1 Run Control    
TCON_TF1 BIT TCON.7 ; Timer 1 Overflow Flag  

; TMR2CN 0xC8 (Timer 2 Control)
TMR2CN_T2XCLK0 BIT TMR2CN.0 ; Timer 2 External Clock Select Bit 0
TMR2CN_T2XCLK1 BIT TMR2CN.1 ; Timer 2 External Clock Select Bit 1
TMR2CN_TR2     BIT TMR2CN.2 ; Timer 2 Run Control                
TMR2CN_T2SPLIT BIT TMR2CN.3 ; Timer 2 Split Mode Enable          
TMR2CN_TF2CEN  BIT TMR2CN.4 ; Timer 2 Capture Enable             
TMR2CN_TF2LEN  BIT TMR2CN.5 ; Timer 2 Low Byte Interrupt Enable  
TMR2CN_TF2L    BIT TMR2CN.6 ; Timer 2 Low Byte Overflow Flag     
TMR2CN_TF2H    BIT TMR2CN.7 ; Timer 2 High Byte Overflow Flag    

;------------------------------------------------------------------------------
; Interrupt Definitions
;------------------------------------------------------------------------------
INT0_IRQn      EQU 0  ; External Interrupt 0               
TIMER0_IRQn    EQU 1  ; Timer 0 Overflow                   
INT1_IRQn      EQU 2  ; External Interrupt 1               
TIMER1_IRQn    EQU 3  ; Timer 1 Overflow                   
UART0_IRQn     EQU 4  ; UART 0                             
TIMER2_IRQn    EQU 5  ; Timer 2 Overflow                   
SPI0_IRQn      EQU 6  ; SPI0                               
SMBUS0_IRQn    EQU 7  ; SMBus 0                            
RTC0ALARM_IRQn EQU 8  ; RTC0 Alarm                         
ADC0WC_IRQn    EQU 9  ; ADC0 Window Compare                
ADC0EOC_IRQn   EQU 10 ; ADC0 End of Conversion             
PCA0_IRQn      EQU 11 ; PCA0                               
DMA0MID_IRQn   EQU 12 ; DMA0 Midpoint Operation Complete   
DMA0FULL_IRQn  EQU 13 ; DMA0 Full-Length Operation Complete
TIMER3_IRQn    EQU 14 ; Timer 3 Overflow                   
PMATCH_IRQn    EQU 16 ; Port Match                         
RTC0FAIL_IRQn  EQU 17 ; RTC0 Oscillator Fail               
MAC0_IRQn      EQU 18 ; MAC0                               
CS0EOC_IRQn    EQU 19 ; CS0 End of Conversion              
CS0DCMP_IRQn   EQU 20 ; CS0 Digital Comparator             
CS0EOS_IRQn    EQU 21 ; CS0 End of Scan                    
I2C0_IRQn      EQU 22 ; I2C Slave 0                        

;------------------------------------------------------------------------------
; SFR Page Definitions
;------------------------------------------------------------------------------
ADC0_PAGE     EQU 000H ;                                    
AMUX0_PAGE    EQU 000H ; Analog Multiplexer Page            
CRC0_PAGE     EQU 000H ;                                    
CS0_PAGE      EQU 000H ;                                    
LEGACY_PAGE   EQU 000H ; Legacy SFR Page                    
PCA0_PAGE     EQU 000H ;                                    
PMU0_PAGE     EQU 000H ;                                    
RTC0_PAGE     EQU 000H ;                                    
SMBUS0_PAGE   EQU 000H ;                                    
SPI0_PAGE     EQU 000H ;                                    
TIMER01_PAGE  EQU 000H ;                                    
TIMER2_PAGE   EQU 000H ;                                    
TIMER3_PAGE   EQU 000H ;                                    
UART0_PAGE    EQU 000H ;                                    
CONFIG_PAGE   EQU 00FH ; System and Port Configuration Page 
DMA0_PAGE     EQU 00FH ;                                    
I2C0_PAGE     EQU 00FH ; I2C Slave 0 Page                   
MAC0_PAGE     EQU 00FH ; Multiply and Accumulate (MAC0) Page
