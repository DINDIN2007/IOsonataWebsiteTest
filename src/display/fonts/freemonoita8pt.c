// 
//  Font data for FreeMono 8pt
// https://savannah.gnu.org/projects/freefont/
// 
// Font bitmap generated by
// http://www.eran.io/the-dot-factory-an-lcd-font-and-image-generator

#include "display/ifont.h"

// Character bitmaps for FreeMono 8pt
static const uint8_t s_FreeMonoIta8ptBitmaps[] = {
	// @0 '!' (2 pixels wide)
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x00, //   
	0x80, // # 
	0x00, //   
	0x00, //   

	// @10 '"' (3 pixels wide)
	0x00, //    
	0x00, //    
	0xA0, // # #
	0xA0, // # #
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @20 '#' (6 pixels wide)
	0x00, //       
	0x18, //    ## 
	0x18, //    ## 
	0x7C, //  #####
	0x30, //   ##  
	0xF8, // ##### 
	0x50, //  # #  
	0x50, //  # #  
	0x20, //   #   
	0x00, //       

	// @30 '$' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x38, //   ###
	0x48, //  #  #
	0x70, //  ### 
	0x90, // #  # 
	0x70, //  ### 
	0x20, //   #  
	0x00, //      
	0x00, //      

	// @40 '%' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x90, // #  # 
	0xE0, // ###  
	0x38, //   ###
	0xF8, // #####
	0x48, //  #  #
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @50 '&' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x18, //    ##
	0x20, //   #  
	0x20, //   #  
	0x68, //  ## #
	0x90, // #  # 
	0xE0, // ###  
	0x00, //      
	0x00, //      

	// @60 ''' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @70 '(' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @80 ')' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @90 '*' (5 pixels wide)
	0x00, //      
	0x20, //   #  
	0xA8, // # # #
	0x70, //  ### 
	0x60, //  ##  
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @100 '+' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x10, //    #  
	0xFC, // ######
	0x10, //    #  
	0x20, //   #   
	0x00, //       
	0x00, //       
	0x00, //       

	// @110 ',' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x40, //  # 
	0x80, // #  

	// @120 '-' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @130 '.' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  

	// @140 '/' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x08, //     #
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x80, // #    
	0x80, // #    
	0x00, //      

	// @150 '0' (5 pixels wide)
	0x00, //      
	0x30, //   ## 
	0x48, //  #  #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x90, // #  # 
	0x60, //  ##  
	0x00, //      
	0x00, //      

	// @160 '1' (5 pixels wide)
	0x00, //      
	0x10, //    # 
	0x70, //  ### 
	0x10, //    # 
	0x10, //    # 
	0x30, //   ## 
	0x20, //   #  
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @170 '2' (6 pixels wide)
	0x00, //       
	0x18, //    ## 
	0x24, //   #  #
	0x04, //      #
	0x18, //    ## 
	0x20, //   #   
	0xC0, // ##    
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @180 '3' (6 pixels wide)
	0x00, //       
	0x1C, //    ###
	0x04, //      #
	0x04, //      #
	0x18, //    ## 
	0x08, //     # 
	0x08, //     # 
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @190 '4' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x38, //   ###
	0x28, //   # #
	0x48, //  #  #
	0x90, // #  # 
	0xF8, // #####
	0x38, //   ###
	0x00, //      
	0x00, //      

	// @200 '5' (5 pixels wide)
	0x00, //      
	0x78, //  ####
	0x40, //  #   
	0xB0, // # ## 
	0x48, //  #  #
	0x08, //     #
	0x10, //    # 
	0xE0, // ###  
	0x00, //      
	0x00, //      

	// @210 '6' (6 pixels wide)
	0x00, //       
	0x1C, //    ###
	0x60, //  ##   
	0x40, //  #    
	0xB0, // # ##  
	0xC8, // ##  # 
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @220 '7' (5 pixels wide)
	0x00, //      
	0x78, //  ####
	0x90, // #  # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x00, //      
	0x00, //      

	// @230 '8' (5 pixels wide)
	0x00, //      
	0x30, //   ## 
	0x48, //  #  #
	0x48, //  #  #
	0x30, //   ## 
	0xD0, // ## # 
	0x90, // #  # 
	0x60, //  ##  
	0x00, //      
	0x00, //      

	// @240 '9' (6 pixels wide)
	0x00, //       
	0x38, //   ### 
	0x64, //  ##  #
	0x44, //  #   #
	0x4C, //  #  ##
	0x38, //   ### 
	0x18, //    ## 
	0xE0, // ###   
	0x00, //       
	0x00, //       

	// @250 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x80, // # 
	0x00, //   
	0x00, //   

	// @260 ';' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x20, //   #
	0x00, //    
	0x00, //    
	0x60, //  ##
	0x40, //  # 
	0x80, // #  
	0x00, //    

	// @270 '<' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x08, //     #
	0x30, //   ## 
	0xC0, // ##   
	0x80, // #    
	0x60, //  ##  
	0x10, //    # 
	0x00, //      
	0x00, //      

	// @280 '=' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @290 '>' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x40, //  #   
	0x20, //   #  
	0x18, //    ##
	0x10, //    # 
	0x60, //  ##  
	0x80, // #    
	0x00, //      
	0x00, //      

	// @300 '?' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x70, //  ###
	0x10, //    #
	0x20, //   # 
	0x40, //  #  
	0x00, //     
	0x80, // #   
	0x00, //     
	0x00, //     

	// @310 '@' (5 pixels wide)
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0xB0, // # ## 
	0xD0, // ## # 
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x60, //  ##  
	0x00, //      

	// @320 'A' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x30, //   ##  
	0x28, //   # # 
	0x48, //  #  # 
	0x78, //  #### 
	0x88, // #   # 
	0xDC, // ## ###
	0x00, //       
	0x00, //       

	// @330 'B' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x44, //  #   #
	0x78, //  #### 
	0x44, //  #   #
	0x44, //  #   #
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @340 'C' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @350 'D' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x44, //  #   #
	0x84, // #    #
	0x88, // #   # 
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @360 'E' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x50, //  # #  
	0x70, //  ###  
	0x50, //  # #  
	0x48, //  #  # 
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @370 'F' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x50, //  # #  
	0x70, //  ###  
	0x50, //  # #  
	0x40, //  #    
	0xE0, // ###   
	0x00, //       
	0x00, //       

	// @380 'G' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x3C, //   ####
	0x44, //  #   #
	0x80, // #     
	0x98, // #  ## 
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       

	// @390 'H' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x6C, //  ## ##
	0x48, //  #  # 
	0x78, //  #### 
	0x48, //  #  # 
	0x48, //  #  # 
	0xDC, // ## ###
	0x00, //       
	0x00, //       

	// @400 'I' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x7C, //  #####
	0x10, //    #  
	0x10, //    #  
	0x20, //   #   
	0x20, //   #   
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @410 'J' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x1E, //    ####
	0x04, //      # 
	0x04, //      # 
	0x88, // #   #  
	0x88, // #   #  
	0x70, //  ###   
	0x00, //        
	0x00, //        

	// @420 'K' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE6, // ###  ##
	0x48, //  #  #  
	0x70, //  ###   
	0x50, //  # #   
	0x48, //  #  #  
	0xEC, // ### ## 
	0x00, //        
	0x00, //        

	// @430 'L' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF0, // ####  
	0x20, //   #   
	0x60, //  ##   
	0x40, //  #    
	0x44, //  #   #
	0xFC, // ######
	0x00, //       
	0x00, //       

	// @440 'M' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x63, //  ##   ##
	0x56, //  # # ## 
	0x5A, //  # ## # 
	0x52, //  # #  # 
	0x42, //  #    # 
	0xEE, // ### ### 
	0x00, //         
	0x00, //         

	// @450 'N' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xCE, // ##  ###
	0x44, //  #   # 
	0xA4, // # #  # 
	0xA8, // # # #  
	0xA8, // # # #  
	0xD8, // ## ##  
	0x00, //        
	0x00, //        

	// @460 'O' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x84, // #    #
	0x84, // #    #
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @470 'P' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  #### 
	0x40, //  #    
	0xE0, // ###   
	0x00, //       
	0x00, //       

	// @480 'Q' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x84, // #    #
	0x84, // #    #
	0x88, // #   # 
	0x70, //  ###  
	0x68, //  ## # 
	0x50, //  # #  

	// @490 'R' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  #### 
	0x48, //  #  # 
	0xE4, // ###  #
	0x00, //       
	0x00, //       

	// @500 'S' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x3C, //   ####
	0x44, //  #   #
	0x70, //  ###  
	0x08, //     # 
	0x88, // #   # 
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @510 'T' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x20, //   #   
	0x20, //   #   
	0x40, //  #    
	0x40, //  #    
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @520 'U' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x48, //  #  # 
	0x88, // #   # 
	0x88, // #   # 
	0x98, // #  ## 
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @530 'V' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE6, // ###  ##
	0x44, //  #   # 
	0x48, //  #  #  
	0x50, //  # #   
	0x50, //  # #   
	0x20, //   #    
	0x00, //        
	0x00, //        

	// @540 'W' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xE6, // ###  ##
	0x84, // #    # 
	0x94, // #  # # 
	0xB4, // # ## # 
	0xD8, // ## ##  
	0x98, // #  ##  
	0x00, //        
	0x00, //        

	// @550 'X' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x36, //   ## ##
	0x24, //   #  # 
	0x18, //    ##  
	0x18, //    ##  
	0x68, //  ## #  
	0xEC, // ### ## 
	0x00, //        
	0x00, //        

	// @560 'Y' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xCC, // ##  ##
	0x88, // #   # 
	0x70, //  ###  
	0x20, //   #   
	0x40, //  #    
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @570 'Z' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0x10, //    # 
	0x60, //  ##  
	0x88, // #   #
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @580 '[' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0xC0, // ## 
	0x00, //    

	// @590 '\' (2 pixels wide)
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x00, //   
	0x00, //   

	// @600 ']' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xE0, // ###
	0x00, //    

	// @610 '^' (4 pixels wide)
	0x00, //     
	0x20, //   # 
	0x50, //  # #
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @620 '_' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       

	// @630 '`' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @640 'a' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x08, //     # 
	0x78, //  #### 
	0x88, // #   # 
	0xFC, // ######
	0x00, //       
	0x00, //       

	// @650 'b' (7 pixels wide)
	0x00, //        
	0x60, //  ##    
	0x20, //   #    
	0x3C, //   #### 
	0x22, //   #   #
	0x42, //  #    #
	0x46, //  #   ##
	0xFC, // ###### 
	0x00, //        
	0x00, //        

	// @660 'c' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x3A, //   ### #
	0xC4, // ##   # 
	0x80, // #      
	0x80, // #      
	0x78, //  ####  
	0x00, //        
	0x00, //        

	// @670 'd' (6 pixels wide)
	0x00, //       
	0x0C, //     ##
	0x04, //      #
	0x74, //  ### #
	0xC8, // ##  # 
	0x88, // #   # 
	0x88, // #   # 
	0x7C, //  #####
	0x00, //       
	0x00, //       

	// @680 'e' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0xFC, // ######
	0x80, // #     
	0x78, //  #### 
	0x00, //       
	0x00, //       

	// @690 'f' (7 pixels wide)
	0x00, //        
	0x0E, //     ###
	0x10, //    #   
	0x7C, //  ##### 
	0x20, //   #    
	0x20, //   #    
	0x20, //   #    
	0xF8, // #####  
	0x00, //        
	0x00, //        

	// @700 'g' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x74, //  ### #
	0xC8, // ##  # 
	0x88, // #   # 
	0x88, // #   # 
	0x78, //  #### 
	0x10, //    #  
	0x70, //  ###  

	// @710 'h' (7 pixels wide)
	0x00, //        
	0xC0, // ##     
	0x40, //  #     
	0x7C, //  ##### 
	0x44, //  #   # 
	0x44, //  #   # 
	0x48, //  #  #  
	0xCE, // ##  ###
	0x00, //        
	0x00, //        

	// @720 'i' (5 pixels wide)
	0x00, //      
	0x10, //    # 
	0x00, //      
	0x60, //  ##  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @730 'j' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x00, //      
	0x78, //  ####
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0xE0, // ###  

	// @740 'k' (6 pixels wide)
	0x00, //       
	0x40, //  #    
	0x40, //  #    
	0x4C, //  #  ##
	0x50, //  # #  
	0x60, //  ##   
	0x50, //  # #  
	0x98, // #  ## 
	0x00, //       
	0x00, //       

	// @750 'l' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x10, //    # 
	0x10, //    # 
	0x30, //   ## 
	0x20, //   #  
	0x20, //   #  
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @760 'm' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x56, //  # # ##
	0x6A, //  ## # #
	0x52, //  # #  #
	0x52, //  # #  #
	0xDE, // ## ####
	0x00, //        
	0x00, //        

	// @770 'n' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xDC, // ## ###
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0xCC, // ##  ##
	0x00, //       
	0x00, //       

	// @780 'o' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0xC4, // ##   #
	0x84, // #    #
	0x8C, // #   ##
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @790 'p' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x7C, //  ##### 
	0x62, //  ##   #
	0x42, //  #    #
	0x46, //  #   ##
	0x7C, //  ##### 
	0x40, //  #     
	0xE0, // ###    

	// @800 'q' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x74, //  ### #
	0xC8, // ##  # 
	0x88, // #   # 
	0x88, // #   # 
	0x78, //  #### 
	0x08, //     # 
	0x3C, //   ####

	// @810 'r' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xEC, // ### ##
	0x70, //  ###  
	0x60, //  ##   
	0x40, //  #    
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @820 's' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0x38, //   ###
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      

	// @830 't' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x20, //   # 
	0xF0, // ####
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x70, //  ###
	0x00, //     
	0x00, //     

	// @840 'u' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xEC, // ### ##
	0x28, //   # # 
	0x48, //  #  # 
	0x48, //  #  # 
	0x78, //  #### 
	0x00, //       
	0x00, //       

	// @850 'v' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xEC, // ### ##
	0x48, //  #  # 
	0x50, //  # #  
	0x50, //  # #  
	0x20, //   #   
	0x00, //       
	0x00, //       

	// @860 'w' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0xE6, // ###  ##
	0x44, //  #   # 
	0x54, //  # # # 
	0x78, //  ####  
	0x58, //  # ##  
	0x00, //        
	0x00, //        

	// @870 'x' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x6C, //  ## ##
	0x48, //  #  # 
	0x30, //   ##  
	0xD0, // ## #  
	0xD8, // ## ## 
	0x00, //       
	0x00, //       

	// @880 'y' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x76, //  ### ##
	0x24, //   #  # 
	0x28, //   # #  
	0x18, //    ##  
	0x10, //    #   
	0x20, //   #    
	0xF0, // ####   

	// @890 'z' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0xF0, // ####
	0xA0, // # # 
	0x40, //  #  
	0x80, // #   
	0xF0, // ####
	0x00, //     
	0x00, //     

	// @900 '{' (4 pixels wide)
	0x00, //     
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0xE0, // ### 
	0x40, //  #  
	0x40, //  #  
	0x60, //  ## 
	0x00, //     

	// @910 '|' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @920 '}' (5 pixels wide)
	0x00, //      
	0x30, //   ## 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x18, //    ##
	0x60, //  ##  
	0x40, //  #   
	0xC0, // ##   
	0x00, //      

	// @930 '~' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0xC0, // ##  
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
};

// Character descriptors for FreeMono 8pt
// { [Char width in bits], [Offset into freeMono_8ptCharBitmaps in bytes] }
static const CharDesc_t s_FreeMonoIta8ptCharDesc[] = {
	{2, s_FreeMonoIta8ptBitmaps + 0}, 			// !
	{3, s_FreeMonoIta8ptBitmaps + 10}, 			// "
	{6, s_FreeMonoIta8ptBitmaps + 20}, 			// #
	{5, s_FreeMonoIta8ptBitmaps + 30}, 			// $
	{5, s_FreeMonoIta8ptBitmaps + 40}, 			// %
	{5, s_FreeMonoIta8ptBitmaps + 50}, 			// &
	{1, s_FreeMonoIta8ptBitmaps + 60}, 			// '
	{2, s_FreeMonoIta8ptBitmaps + 70}, 			// (
	{2, s_FreeMonoIta8ptBitmaps + 80}, 			// )
	{5, s_FreeMonoIta8ptBitmaps + 90}, 			// *
	{6, s_FreeMonoIta8ptBitmaps + 100}, 		// +
	{3, s_FreeMonoIta8ptBitmaps + 110}, 		// ,
	{5, s_FreeMonoIta8ptBitmaps + 120}, 		// -
	{1, s_FreeMonoIta8ptBitmaps + 130}, 		// .
	{5, s_FreeMonoIta8ptBitmaps + 140}, 		// /
	{5, s_FreeMonoIta8ptBitmaps + 150}, 		// 0
	{5, s_FreeMonoIta8ptBitmaps + 160}, 		// 1
	{6, s_FreeMonoIta8ptBitmaps + 170}, 		// 2
	{6, s_FreeMonoIta8ptBitmaps + 180}, 		// 3
	{5, s_FreeMonoIta8ptBitmaps + 190}, 		// 4
	{5, s_FreeMonoIta8ptBitmaps + 200}, 		// 5
	{6, s_FreeMonoIta8ptBitmaps + 210}, 		// 6
	{5, s_FreeMonoIta8ptBitmaps + 220}, 		// 7
	{5, s_FreeMonoIta8ptBitmaps + 230}, 		// 8
	{6, s_FreeMonoIta8ptBitmaps + 240}, 		// 9
	{2, s_FreeMonoIta8ptBitmaps + 250}, 		// :
	{3, s_FreeMonoIta8ptBitmaps + 260}, 		// ;
	{5, s_FreeMonoIta8ptBitmaps + 270}, 		// <
	{6, s_FreeMonoIta8ptBitmaps + 280}, 		// =
	{5, s_FreeMonoIta8ptBitmaps + 290}, 		// >
	{4, s_FreeMonoIta8ptBitmaps + 300}, 		// ?
	{5, s_FreeMonoIta8ptBitmaps + 310}, 		// @
	{6, s_FreeMonoIta8ptBitmaps + 320}, 		// A
	{6, s_FreeMonoIta8ptBitmaps + 330}, 		// B
	{6, s_FreeMonoIta8ptBitmaps + 340}, 		// C
	{6, s_FreeMonoIta8ptBitmaps + 350}, 		// D
	{6, s_FreeMonoIta8ptBitmaps + 360}, 		// E
	{6, s_FreeMonoIta8ptBitmaps + 370}, 		// F
	{6, s_FreeMonoIta8ptBitmaps + 380}, 		// G
	{6, s_FreeMonoIta8ptBitmaps + 390}, 		// H
	{6, s_FreeMonoIta8ptBitmaps + 400}, 		// I
	{7, s_FreeMonoIta8ptBitmaps + 410}, 		// J
	{7, s_FreeMonoIta8ptBitmaps + 420}, 		// K
	{6, s_FreeMonoIta8ptBitmaps + 430}, 		// L
	{8, s_FreeMonoIta8ptBitmaps + 440}, 		// M
	{7, s_FreeMonoIta8ptBitmaps + 450}, 		// N
	{6, s_FreeMonoIta8ptBitmaps + 460}, 		// O
	{6, s_FreeMonoIta8ptBitmaps + 470}, 		// P
	{6, s_FreeMonoIta8ptBitmaps + 480}, 		// Q
	{6, s_FreeMonoIta8ptBitmaps + 490}, 		// R
	{6, s_FreeMonoIta8ptBitmaps + 500}, 		// S
	{6, s_FreeMonoIta8ptBitmaps + 510}, 		// T
	{6, s_FreeMonoIta8ptBitmaps + 520}, 		// U
	{7, s_FreeMonoIta8ptBitmaps + 530}, 		// V
	{7, s_FreeMonoIta8ptBitmaps + 540}, 		// W
	{7, s_FreeMonoIta8ptBitmaps + 550}, 		// X
	{6, s_FreeMonoIta8ptBitmaps + 560}, 		// Y
	{5, s_FreeMonoIta8ptBitmaps + 570}, 		// Z
	{3, s_FreeMonoIta8ptBitmaps + 580}, 		// [
	{2, s_FreeMonoIta8ptBitmaps + 590}, 		// '\'
	{3, s_FreeMonoIta8ptBitmaps + 600}, 		// ]
	{4, s_FreeMonoIta8ptBitmaps + 610}, 		// ^
	{6, s_FreeMonoIta8ptBitmaps + 620}, 		// _
	{1, s_FreeMonoIta8ptBitmaps + 630}, 		// `
	{6, s_FreeMonoIta8ptBitmaps + 640}, 		// a
	{7, s_FreeMonoIta8ptBitmaps + 650}, 		// b
	{7, s_FreeMonoIta8ptBitmaps + 660}, 		// c
	{6, s_FreeMonoIta8ptBitmaps + 670}, 		// d
	{6, s_FreeMonoIta8ptBitmaps + 680}, 		// e
	{7, s_FreeMonoIta8ptBitmaps + 690}, 		// f
	{6, s_FreeMonoIta8ptBitmaps + 700}, 		// g
	{7, s_FreeMonoIta8ptBitmaps + 710}, 		// h
	{5, s_FreeMonoIta8ptBitmaps + 720}, 		// i
	{5, s_FreeMonoIta8ptBitmaps + 730}, 		// j
	{6, s_FreeMonoIta8ptBitmaps + 740}, 		// k
	{5, s_FreeMonoIta8ptBitmaps + 750}, 		// l
	{7, s_FreeMonoIta8ptBitmaps + 760}, 		// m
	{6, s_FreeMonoIta8ptBitmaps + 770}, 		// n
	{6, s_FreeMonoIta8ptBitmaps + 780}, 		// o
	{7, s_FreeMonoIta8ptBitmaps + 790}, 		// p
	{6, s_FreeMonoIta8ptBitmaps + 800}, 		// q
	{6, s_FreeMonoIta8ptBitmaps + 810}, 		// r
	{5, s_FreeMonoIta8ptBitmaps + 820}, 		// s
	{4, s_FreeMonoIta8ptBitmaps + 830}, 		// t
	{6, s_FreeMonoIta8ptBitmaps + 840}, 		// u
	{6, s_FreeMonoIta8ptBitmaps + 850}, 		// v
	{7, s_FreeMonoIta8ptBitmaps + 860}, 		// w
	{6, s_FreeMonoIta8ptBitmaps + 870}, 		// x
	{7, s_FreeMonoIta8ptBitmaps + 880}, 		// y
	{4, s_FreeMonoIta8ptBitmaps + 890}, 		// z
	{4, s_FreeMonoIta8ptBitmaps + 900}, 		// {
	{2, s_FreeMonoIta8ptBitmaps + 910}, 		// |
	{5, s_FreeMonoIta8ptBitmaps + 920}, 		// }
	{4, s_FreeMonoIta8ptBitmaps + 930}, 		// ~
};

// Font information for FreeMono 8pt
const FontDesc_t iFontFreeMonoIta8pt = {
	0,
	8,
	9,
	{.pCharDesc = s_FreeMonoIta8ptCharDesc }
};

