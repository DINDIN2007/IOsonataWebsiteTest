// 
// Font data for FreeMono 8pt
// https://savannah.gnu.org/projects/freefont/
// 
// Font bitmap generated by
// http://www.eran.io/the-dot-factory-an-lcd-font-and-image-generator

#include "display/ifont.h"

// Character bitmaps for FreeMono 8pt
static const uint8_t s_FreeMono8ptBitmaps[] = {
	// @0 '!' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  

	// @9 '"' (3 pixels wide)
	0x00, //    
	0xA0, // # #
	0xA0, // # #
	0xA0, // # #
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @18 '#' (5 pixels wide)
	0x30, //   ## 
	0x30, //   ## 
	0xF8, // #####
	0x50, //  # # 
	0xF8, // #####
	0x50, //  # # 
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @27 '$' (5 pixels wide)
	0x20, //   #  
	0x70, //  ### 
	0x50, //  # # 
	0x38, //   ###
	0x88, // #   #
	0xF0, // #### 
	0x20, //   #  
	0x00, //      
	0x00, //      

	// @36 '%' (5 pixels wide)
	0x70, //  ### 
	0x90, // #  # 
	0x60, //  ##  
	0x38, //   ###
	0xD8, // ## ##
	0x28, //   # #
	0x18, //    ##
	0x00, //      
	0x00, //      

	// @45 '&' (5 pixels wide)
	0x00, //      
	0x30, //   ## 
	0x40, //  #   
	0x40, //  #   
	0xA8, // # # #
	0x90, // #  # 
	0x68, //  ## #
	0x00, //      
	0x00, //      

	// @54 ''' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @63 '(' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @72 ')' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @81 '*' (5 pixels wide)
	0x20, //   #  
	0x20, //   #  
	0xF8, // #####
	0x60, //  ##  
	0x10, //    # 
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @90 '+' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x40, //  # 
	0xE0, // ###
	0x40, //  # 
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @99 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x80, // # 
	0x80, // # 

	// @108 '-' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @117 '.' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  

	// @126 '/' (5 pixels wide)
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x80, // #    
	0x00, //      

	// @135 '0' (5 pixels wide)
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xC8, // ##  #
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @144 '1' (3 pixels wide)
	0x40, //  # 
	0xC0, // ## 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @153 '2' (5 pixels wide)
	0x70, //  ### 
	0x88, // #   #
	0x08, //     #
	0x10, //    # 
	0x20, //   #  
	0xC0, // ##   
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @162 '3' (5 pixels wide)
	0xE0, // ###  
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x18, //    ##
	0x08, //     #
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @171 '4' (5 pixels wide)
	0x10, //    # 
	0x30, //   ## 
	0x50, //  # # 
	0x50, //  # # 
	0x90, // #  # 
	0x78, //  ####
	0x38, //   ###
	0x00, //      
	0x00, //      

	// @180 '5' (4 pixels wide)
	0xE0, // ### 
	0x80, // #   
	0xE0, // ### 
	0x90, // #  #
	0x10, //    #
	0x10, //    #
	0xE0, // ### 
	0x00, //     
	0x00, //     

	// @189 '6' (4 pixels wide)
	0x70, //  ###
	0x40, //  #  
	0x80, // #   
	0xE0, // ### 
	0x90, // #  #
	0x90, // #  #
	0x60, //  ## 
	0x00, //     
	0x00, //     

	// @198 '7' (5 pixels wide)
	0xF8, // #####
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x00, //      
	0x00, //      

	// @207 '8' (5 pixels wide)
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @216 '9' (4 pixels wide)
	0x60, //  ## 
	0x90, // #  #
	0x90, // #  #
	0x90, // #  #
	0x70, //  ###
	0x30, //   ##
	0xE0, // ### 
	0x00, //     
	0x00, //     

	// @225 ':' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  

	// @234 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x40, //  #
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 

	// @243 '<' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x30, //   ## 
	0xC0, // ##   
	0x40, //  #   
	0x30, //   ## 
	0x08, //     #
	0x00, //      
	0x00, //      

	// @252 '=' (5 pixels wide)
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @261 '>' (4 pixels wide)
	0x00, //     
	0x00, //     
	0xC0, // ##  
	0x30, //   ##
	0x10, //    #
	0x60, //  ## 
	0x80, // #   
	0x00, //     
	0x00, //     

	// @270 '?' (4 pixels wide)
	0x00, //     
	0xF0, // ####
	0x10, //    #
	0x20, //   # 
	0x40, //  #  
	0x00, //     
	0x40, //  #  
	0x00, //     
	0x00, //     

	// @279 '@' (6 pixels wide)
	0x78, //  #### 
	0xC8, // ##  # 
	0xB8, // # ### 
	0xA8, // # # # 
	0xBC, // # ####
	0x80, // #     
	0xC0, // ##    
	0x78, //  #### 
	0x00, //       

	// @288 'A' (6 pixels wide)
	0x00, //       
	0x70, //  ###  
	0x30, //   ##  
	0x48, //  #  # 
	0x78, //  #### 
	0x84, // #    #
	0xCC, // ##  ##
	0x00, //       
	0x00, //       

	// @297 'B' (6 pixels wide)
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x78, //  #### 
	0x44, //  #   #
	0x44, //  #   #
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @306 'C' (5 pixels wide)
	0x00, //      
	0x78, //  ####
	0x88, // #   #
	0x80, // #    
	0x80, // #    
	0xC0, // ##   
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @315 'D' (6 pixels wide)
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x44, //  #   #
	0x44, //  #   #
	0x4C, //  #  ##
	0xF8, // ##### 
	0x00, //       
	0x00, //       

	// @324 'E' (6 pixels wide)
	0x00, //       
	0xF8, // ##### 
	0x50, //  # #  
	0x70, //  ###  
	0x50, //  # #  
	0x44, //  #   #
	0xFC, // ######
	0x00, //       
	0x00, //       

	// @333 'F' (6 pixels wide)
	0x00, //       
	0xFC, // ######
	0x50, //  # #  
	0x70, //  ###  
	0x50, //  # #  
	0x40, //  #    
	0xE0, // ###   
	0x00, //       
	0x00, //       

	// @342 'G' (6 pixels wide)
	0x00, //       
	0x78, //  #### 
	0x88, // #   # 
	0x80, // #     
	0x9C, // #  ###
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       

	// @351 'H' (7 pixels wide)
	0x00, //        
	0xEE, // ### ###
	0x44, //  #   # 
	0x7C, //  ##### 
	0x44, //  #   # 
	0x44, //  #   # 
	0xEE, // ### ###
	0x00, //        
	0x00, //        

	// @360 'I' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @369 'J' (6 pixels wide)
	0x00, //       
	0x1C, //    ###
	0x08, //     # 
	0x08, //     # 
	0x08, //     # 
	0x88, // #   # 
	0xF0, // ####  
	0x00, //       
	0x00, //       

	// @378 'K' (6 pixels wide)
	0x00, //       
	0xEC, // ### ##
	0x48, //  #  # 
	0x70, //  ###  
	0x48, //  #  # 
	0x48, //  #  # 
	0xE4, // ###  #
	0x00, //       
	0x00, //       

	// @387 'L' (5 pixels wide)
	0x00, //      
	0xE0, // ###  
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x48, //  #  #
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @396 'M' (7 pixels wide)
	0x00, //        
	0xC6, // ##   ##
	0x6C, //  ## ## 
	0x74, //  ### # 
	0x74, //  ### # 
	0x44, //  #   # 
	0xEE, // ### ###
	0x00, //        
	0x00, //        

	// @405 'N' (7 pixels wide)
	0x00, //        
	0xCE, // ##  ###
	0x64, //  ##  # 
	0x54, //  # # # 
	0x54, //  # # # 
	0x4C, //  #  ## 
	0xE4, // ###  # 
	0x00, //        
	0x00, //        

	// @414 'O' (6 pixels wide)
	0x00, //       
	0x78, //  #### 
	0x4C, //  #  ##
	0x84, // #    #
	0x84, // #    #
	0x4C, //  #  ##
	0x78, //  #### 
	0x00, //       
	0x00, //       

	// @423 'P' (6 pixels wide)
	0x00, //       
	0xF8, // ##### 
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  #### 
	0x40, //  #    
	0xE0, // ###   
	0x00, //       
	0x00, //       

	// @432 'Q' (6 pixels wide)
	0x00, //       
	0x78, //  #### 
	0xCC, // ##  ##
	0x84, // #    #
	0x84, // #    #
	0xCC, // ##  ##
	0x78, //  #### 
	0x34, //   ## #
	0x08, //     # 

	// @441 'R' (7 pixels wide)
	0x00, //        
	0xF8, // #####  
	0x44, //  #   # 
	0x44, //  #   # 
	0x78, //  ####  
	0x4C, //  #  ## 
	0xE2, // ###   #
	0x00, //        
	0x00, //        

	// @450 'S' (5 pixels wide)
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0x40, //  #   
	0x38, //   ###
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      

	// @459 'T' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @468 'U' (7 pixels wide)
	0x00, //        
	0xEE, // ### ###
	0x44, //  #   # 
	0x44, //  #   # 
	0x44, //  #   # 
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        

	// @477 'V' (6 pixels wide)
	0x00, //       
	0xCC, // ##  ##
	0x84, // #    #
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x10, //    #  
	0x00, //       
	0x00, //       

	// @486 'W' (7 pixels wide)
	0x00, //        
	0xEE, // ### ###
	0x74, //  ### # 
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0x4C, //  #  ## 
	0x48, //  #  #  
	0x00, //        
	0x00, //        

	// @495 'X' (6 pixels wide)
	0x00, //       
	0x4C, //  #  ##
	0x48, //  #  # 
	0x30, //   ##  
	0x30, //   ##  
	0x48, //  #  # 
	0xCC, // ##  ##
	0x00, //       
	0x00, //       

	// @504 'Y' (6 pixels wide)
	0x00, //       
	0xC4, // ##   #
	0x44, //  #   #
	0x28, //   # # 
	0x10, //    #  
	0x10, //    #  
	0x38, //   ### 
	0x00, //       
	0x00, //       

	// @513 'Z' (5 pixels wide)
	0x00, //      
	0xE0, // ###  
	0xA0, // # #  
	0x20, //   #  
	0x40, //  #   
	0x88, // #   #
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @522 '[' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @531 '\' (5 pixels wide)
	0x80, // #    
	0x40, //  #   
	0x40, //  #   
	0x20, //   #  
	0x20, //   #  
	0x10, //    # 
	0x10, //    # 
	0x08, //     #
	0x00, //      

	// @540 ']' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @549 '^' (4 pixels wide)
	0x20, //   # 
	0x60, //  ## 
	0x90, // #  #
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @558 '_' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x00, //        

	// @567 '`' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @576 'a' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x78, //  #### 
	0x08, //     # 
	0x78, //  #### 
	0x88, // #   # 
	0xFC, // ######
	0x00, //       
	0x00, //       

	// @585 'b' (5 pixels wide)
	0x80, // #    
	0x80, // #    
	0xB0, // # ## 
	0xC8, // ##  #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      

	// @594 'c' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x78, //  ####
	0x88, // #   #
	0x80, // #    
	0x80, // #    
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @603 'd' (6 pixels wide)
	0x08, //     # 
	0x08, //     # 
	0x68, //  ## # 
	0x98, // #  ## 
	0x88, // #   # 
	0x88, // #   # 
	0x7C, //  #####
	0x00, //       
	0x00, //       

	// @612 'e' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x90, // #  # 
	0xF8, // #####
	0x80, // #    
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @621 'f' (4 pixels wide)
	0x70, //  ###
	0x40, //  #  
	0xE0, // ### 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0xE0, // ### 
	0x00, //     
	0x00, //     

	// @630 'g' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x68, //  ## #
	0x98, // #  ##
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x38, //   ###

	// @639 'h' (7 pixels wide)
	0x40, //  #     
	0x40, //  #     
	0x58, //  # ##  
	0x64, //  ##  # 
	0x44, //  #   # 
	0x44, //  #   # 
	0xEE, // ### ###
	0x00, //        
	0x00, //        

	// @648 'i' (3 pixels wide)
	0x40, //  # 
	0x00, //    
	0xC0, // ## 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @657 'j' (3 pixels wide)
	0x40, //  # 
	0x00, //    
	0xE0, // ###
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xE0, // ###

	// @666 'k' (5 pixels wide)
	0x80, // #    
	0x80, // #    
	0xB0, // # ## 
	0xA0, // # #  
	0xC0, // ##   
	0xB0, // # ## 
	0x98, // #  ##
	0x00, //      
	0x00, //      

	// @675 'l' (3 pixels wide)
	0xC0, // ## 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @684 'm' (5 pixels wide)
	0x00, //      
	0x00, //      
	0xD8, // ## ##
	0xA8, // # # #
	0xA8, // # # #
	0xA8, // # # #
	0xE8, // ### #
	0x00, //      
	0x00, //      

	// @693 'n' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x5C, //  # ### 
	0x64, //  ##  # 
	0x44, //  #   # 
	0x44, //  #   # 
	0xEE, // ### ###
	0x00, //        
	0x00, //        

	// @702 'o' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @711 'p' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xD8, // ## ## 
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0x78, //  #### 
	0x40, //  #    
	0xE0, // ###   

	// @720 'q' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x6C, //  ## ##
	0x98, // #  ## 
	0x88, // #   # 
	0x88, // #   # 
	0x78, //  #### 
	0x08, //     # 
	0x1C, //    ###

	// @729 'r' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x58, //  # ##
	0x60, //  ##  
	0x40, //  #   
	0x40, //  #   
	0xE0, // ###  
	0x00, //      
	0x00, //      

	// @738 's' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0x78, //  ####
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      

	// @747 't' (5 pixels wide)
	0x00, //      
	0x40, //  #   
	0xF0, // #### 
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @756 'u' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @765 'v' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xEC, // ### ##
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x10, //    #  
	0x00, //       
	0x00, //       

	// @774 'w' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xEE, // ### ###
	0x44, //  #   # 
	0x54, //  # # # 
	0x68, //  ## #  
	0x48, //  #  #  
	0x00, //        
	0x00, //        

	// @783 'x' (5 pixels wide)
	0x00, //      
	0x00, //      
	0xD8, // ## ##
	0x90, // #  # 
	0x60, //  ##  
	0x90, // #  # 
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @792 'y' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x98, // #  ##
	0x90, // #  # 
	0x90, // #  # 
	0x60, //  ##  
	0x20, //   #  
	0x40, //  #   
	0xE0, // ###  

	// @801 'z' (5 pixels wide)
	0x00, //      
	0x00, //      
	0xE0, // ###  
	0xA0, // # #  
	0x40, //  #   
	0x40, //  #   
	0x78, //  ####
	0x00, //      
	0x00, //      

	// @810 '{' (2 pixels wide)
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x00, //   

	// @819 '|' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @828 '}' (2 pixels wide)
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @837 '~' (4 pixels wide)
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
static const CharDesc_t s_FreeMono8ptCharDesc[] = {
	{1, s_FreeMono8ptBitmaps + 0}, 		// !
	{3, s_FreeMono8ptBitmaps + 9}, 		// "
	{5, s_FreeMono8ptBitmaps + 18}, 		// #
	{5, s_FreeMono8ptBitmaps + 27}, 		// $
	{5, s_FreeMono8ptBitmaps + 36}, 		// %
	{5, s_FreeMono8ptBitmaps + 45}, 		// &
	{1, s_FreeMono8ptBitmaps + 54}, 		// '
	{1, s_FreeMono8ptBitmaps + 63}, 		// (
	{1, s_FreeMono8ptBitmaps + 72}, 		// )
	{5, s_FreeMono8ptBitmaps + 81}, 		// *
	{3, s_FreeMono8ptBitmaps + 90}, 		// +
	{2, s_FreeMono8ptBitmaps + 99}, 		// ,
	{5, s_FreeMono8ptBitmaps + 108}, 		// -
	{1, s_FreeMono8ptBitmaps + 117}, 		// .
	{5, s_FreeMono8ptBitmaps + 126}, 		// /
	{5, s_FreeMono8ptBitmaps + 135}, 		// 0
	{3, s_FreeMono8ptBitmaps + 144}, 		// 1
	{5, s_FreeMono8ptBitmaps + 153}, 		// 2
	{5, s_FreeMono8ptBitmaps + 162}, 		// 3
	{5, s_FreeMono8ptBitmaps + 171}, 		// 4
	{4, s_FreeMono8ptBitmaps + 180}, 		// 5
	{4, s_FreeMono8ptBitmaps + 189}, 		// 6
	{5, s_FreeMono8ptBitmaps + 198}, 		// 7
	{5, s_FreeMono8ptBitmaps + 207}, 		// 8
	{4, s_FreeMono8ptBitmaps + 216}, 		// 9
	{1, s_FreeMono8ptBitmaps + 225}, 		// :
	{2, s_FreeMono8ptBitmaps + 234}, 		// ;
	{5, s_FreeMono8ptBitmaps + 243}, 		// <
	{5, s_FreeMono8ptBitmaps + 252}, 		// =
	{4, s_FreeMono8ptBitmaps + 261}, 		// >
	{4, s_FreeMono8ptBitmaps + 270}, 		// ?
	{6, s_FreeMono8ptBitmaps + 279}, 		// @
	{6, s_FreeMono8ptBitmaps + 288}, 		// A
	{6, s_FreeMono8ptBitmaps + 297}, 		// B
	{5, s_FreeMono8ptBitmaps + 306}, 		// C
	{6, s_FreeMono8ptBitmaps + 315}, 		// D
	{6, s_FreeMono8ptBitmaps + 324}, 		// E
	{6, s_FreeMono8ptBitmaps + 333}, 		// F
	{6, s_FreeMono8ptBitmaps + 342}, 		// G
	{7, s_FreeMono8ptBitmaps + 351}, 		// H
	{3, s_FreeMono8ptBitmaps + 360}, 		// I
	{6, s_FreeMono8ptBitmaps + 369}, 		// J
	{6, s_FreeMono8ptBitmaps + 378}, 		// K
	{5, s_FreeMono8ptBitmaps + 387}, 		// L
	{7, s_FreeMono8ptBitmaps + 396}, 		// M
	{7, s_FreeMono8ptBitmaps + 405}, 		// N
	{6, s_FreeMono8ptBitmaps + 414}, 		// O
	{6, s_FreeMono8ptBitmaps + 423}, 		// P
	{6, s_FreeMono8ptBitmaps + 432}, 		// Q
	{7, s_FreeMono8ptBitmaps + 441}, 		// R
	{5, s_FreeMono8ptBitmaps + 450}, 		// S
	{5, s_FreeMono8ptBitmaps + 459}, 		// T
	{7, s_FreeMono8ptBitmaps + 468}, 		// U
	{6, s_FreeMono8ptBitmaps + 477}, 		// V
	{7, s_FreeMono8ptBitmaps + 486}, 		// W
	{6, s_FreeMono8ptBitmaps + 495}, 		// X
	{6, s_FreeMono8ptBitmaps + 504}, 		// Y
	{5, s_FreeMono8ptBitmaps + 513}, 		// Z
	{1, s_FreeMono8ptBitmaps + 522}, 		// [
	{5, s_FreeMono8ptBitmaps + 531}, 		// '\'
	{1, s_FreeMono8ptBitmaps + 540}, 		// ]
	{4, s_FreeMono8ptBitmaps + 549}, 		// ^
	{7, s_FreeMono8ptBitmaps + 558}, 		// _
	{1, s_FreeMono8ptBitmaps + 567}, 		// `
	{6, s_FreeMono8ptBitmaps + 576}, 		// a
	{5, s_FreeMono8ptBitmaps + 585}, 		// b
	{5, s_FreeMono8ptBitmaps + 594}, 		// c
	{6, s_FreeMono8ptBitmaps + 603}, 		// d
	{5, s_FreeMono8ptBitmaps + 612}, 		// e
	{4, s_FreeMono8ptBitmaps + 621}, 		// f
	{5, s_FreeMono8ptBitmaps + 630}, 		// g
	{7, s_FreeMono8ptBitmaps + 639}, 		// h
	{3, s_FreeMono8ptBitmaps + 648}, 		// i
	{3, s_FreeMono8ptBitmaps + 657}, 		// j
	{5, s_FreeMono8ptBitmaps + 666}, 		// k
	{3, s_FreeMono8ptBitmaps + 675}, 		// l
	{5, s_FreeMono8ptBitmaps + 684}, 		// m
	{7, s_FreeMono8ptBitmaps + 693}, 		// n
	{5, s_FreeMono8ptBitmaps + 702}, 		// o
	{6, s_FreeMono8ptBitmaps + 711}, 		// p
	{6, s_FreeMono8ptBitmaps + 720}, 		// q
	{5, s_FreeMono8ptBitmaps + 729}, 		// r
	{5, s_FreeMono8ptBitmaps + 738}, 		// s
	{5, s_FreeMono8ptBitmaps + 747}, 		// t
	{5, s_FreeMono8ptBitmaps + 756}, 		// u
	{6, s_FreeMono8ptBitmaps + 765}, 		// v
	{7, s_FreeMono8ptBitmaps + 774}, 		// w
	{5, s_FreeMono8ptBitmaps + 783}, 		// x
	{5, s_FreeMono8ptBitmaps + 792}, 		// y
	{5, s_FreeMono8ptBitmaps + 801}, 		// z
	{2, s_FreeMono8ptBitmaps + 810}, 		// {
	{1, s_FreeMono8ptBitmaps + 819}, 		// |
	{2, s_FreeMono8ptBitmaps + 828}, 		// }
	{4, s_FreeMono8ptBitmaps + 837}, 		// ~
};

// Font information for FreeMono 8pt
const FontDesc_t iFontFreeMono8pt = {
	FONT_TYPE_VAR_WIDTH,
	7,
	9,
	{.pCharDesc = s_FreeMono8ptCharDesc }
};

