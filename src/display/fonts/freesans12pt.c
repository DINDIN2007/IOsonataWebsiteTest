// 
//  Font data for FreeSans 12pt
// 	https://savannah.gnu.org/projects/freefont/
// 
// 	Font bitmap generated by
// 	http://www.eran.io/the-dot-factory-an-lcd-font-and-image-generator

#include "display/ifont.h"

// Character bitmaps for FreeSans 12pt
static const uint8_t s_FreeSans12ptBitmaps[] = {
	// @0 '!' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @15 '"' (3 pixels wide)
	0x00, //    
	0xA0, // # #
	0xA0, // # #
	0xA0, // # #
	0xA0, // # #
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @30 '#' (9 pixels wide)
	0x00, 0x00, //          
	0x13, 0x00, //    #  ## 
	0x12, 0x00, //    #  #  
	0x12, 0x00, //    #  #  
	0x7F, 0x80, //  ########
	0x32, 0x00, //   ##  #  
	0x22, 0x00, //   #   #  
	0x26, 0x00, //   #  ##  
	0xFF, 0x00, // ######## 
	0x24, 0x00, //   #  #   
	0x24, 0x00, //   #  #   
	0x64, 0x00, //  ##  #   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @60 '$' (7 pixels wide)
	0x10, //    #   
	0x7C, //  ##### 
	0xD6, // ## # ##
	0x92, // #  #  #
	0x90, // #  #   
	0xD0, // ## #   
	0x38, //   ###  
	0x16, //    # ##
	0x12, //    #  #
	0x92, // #  #  #
	0xD6, // ## # ##
	0x7C, //  ##### 
	0x10, //    #   
	0x00, //        
	0x00, //        

	// @75 '%' (14 pixels wide)
	0x00, 0x00, //               
	0x78, 0x40, //  ####    #    
	0xCC, 0x40, // ##  ##   #    
	0x84, 0x80, // #    #  #     
	0x85, 0x80, // #    # ##     
	0xCD, 0x00, // ##  ## #      
	0x7B, 0x00, //  #### ##      
	0x02, 0x78, //       #  #### 
	0x06, 0xC4, //      ## ##   #
	0x04, 0x84, //      #  #    #
	0x08, 0xCC, //     #   ##  ##
	0x08, 0x78, //     #    #### 
	0x00, 0x00, //               
	0x00, 0x00, //               
	0x00, 0x00, //               

	// @105 '&' (9 pixels wide)
	0x00, 0x00, //          
	0x38, 0x00, //   ###    
	0x44, 0x00, //  #   #   
	0x44, 0x00, //  #   #   
	0x6C, 0x00, //  ## ##   
	0x38, 0x00, //   ###    
	0x70, 0x00, //  ###     
	0xD9, 0x00, // ## ##  # 
	0x8F, 0x00, // #   #### 
	0x86, 0x00, // #    ##  
	0xCF, 0x00, // ##  #### 
	0x79, 0x80, //  ####  ##
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @135 ''' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @150 '(' (3 pixels wide)
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x20, //   #

	// @165 ')' (3 pixels wide)
	0x80, // #  
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  

	// @180 '*' (5 pixels wide)
	0x20, //   #  
	0xA8, // # # #
	0x70, //  ### 
	0x50, //  # # 
	0x50, //  # # 
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @195 '+' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0xFE, // #######
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @210 ',' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @225 '-' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0xF0, // ####
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     
	0x00, //     

	// @240 '.' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
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
	0x00, //  

	// @255 '/' (4 pixels wide)
	0x10, //    #
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @270 '0' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @285 '1' (3 pixels wide)
	0x00, //    
	0x20, //   #
	0x60, //  ##
	0xE0, // ###
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x00, //    
	0x00, //    
	0x00, //    

	// @300 '2' (7 pixels wide)
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x82, // #     #
	0x02, //       #
	0x02, //       #
	0x0C, //     ## 
	0x38, //   ###  
	0x60, //  ##    
	0x40, //  #     
	0x80, // #      
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @315 '3' (7 pixels wide)
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x82, // #     #
	0x02, //       #
	0x06, //      ##
	0x1C, //    ### 
	0x06, //      ##
	0x02, //       #
	0x82, // #     #
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @330 '4' (8 pixels wide)
	0x00, //         
	0x04, //      #  
	0x0C, //     ##  
	0x1C, //    ###  
	0x14, //    # #  
	0x24, //   #  #  
	0x64, //  ##  #  
	0xC4, // ##   #  
	0xFF, // ########
	0x04, //      #  
	0x04, //      #  
	0x04, //      #  
	0x00, //         
	0x00, //         
	0x00, //         

	// @345 '5' (7 pixels wide)
	0x00, //        
	0x7E, //  ######
	0x40, //  #     
	0x40, //  #     
	0x80, // #      
	0xFC, // ###### 
	0xC6, // ##   ##
	0x02, //       #
	0x02, //       #
	0x82, // #     #
	0xC4, // ##   # 
	0x78, //  ####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @360 '6' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x80, // #      
	0xBC, // # #### 
	0xC6, // ##   ##
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @375 '7' (7 pixels wide)
	0x00, //        
	0xFE, // #######
	0x04, //      # 
	0x04, //      # 
	0x08, //     #  
	0x10, //    #   
	0x10, //    #   
	0x20, //   #    
	0x20, //   #    
	0x20, //   #    
	0x40, //  #     
	0x40, //  #     
	0x00, //        
	0x00, //        
	0x00, //        

	// @390 '8' (7 pixels wide)
	0x00, //        
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x82, // #     #
	0x82, // #     #
	0xC6, // ##   ##
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x82, // #     #
	0x82, // #     #
	0xC6, // ##   ##
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @405 '9' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0xC6, // ##   ##
	0x7A, //  #### #
	0x02, //       #
	0x02, //       #
	0xC4, // ##   # 
	0x78, //  ####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @420 ':' (1 pixels wide)
	0x00, //  
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
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @435 ';' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @450 '<' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x01, //        #
	0x07, //      ###
	0x38, //   ###   
	0xE0, // ###     
	0xC0, // ##      
	0x38, //   ###   
	0x0E, //     ### 
	0x03, //       ##
	0x00, //         
	0x00, //         
	0x00, //         

	// @465 '=' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xFF, // ########
	0x00, //         
	0x00, //         
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         

	// @480 '>' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0x00, //         
	0xE0, // ###     
	0x38, //   ###   
	0x06, //      ## 
	0x07, //      ###
	0x1C, //    ###  
	0xE0, // ###     
	0x80, // #       
	0x00, //         
	0x00, //         
	0x00, //         

	// @495 '?' (7 pixels wide)
	0x7C, //  ##### 
	0xC6, // ##   ##
	0x82, // #     #
	0x02, //       #
	0x06, //      ##
	0x0C, //     ## 
	0x18, //    ##  
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @510 '@' (14 pixels wide)
	0x07, 0xC0, //      #####    
	0x18, 0x70, //    ##    ###  
	0x20, 0x18, //   #        ## 
	0x40, 0x08, //  #          # 
	0x47, 0x64, //  #   ### ##  #
	0x88, 0xE4, // #   #   ###  #
	0x90, 0xC4, // #  #    ##   #
	0x90, 0xC4, // #  #    ##   #
	0x90, 0x8C, // #  #    #   ##
	0x99, 0x98, // #  ##  ##  ## 
	0x4E, 0xF0, //  #  ### ####  
	0x60, 0x00, //  ##           
	0x30, 0x00, //   ##          
	0x0F, 0xC0, //     ######    
	0x00, 0x00, //               

	// @540 'A' (10 pixels wide)
	0x0C, 0x00, //     ##    
	0x0E, 0x00, //     ###   
	0x0A, 0x00, //     # #   
	0x1B, 0x00, //    ## ##  
	0x13, 0x00, //    #  ##  
	0x31, 0x00, //   ##   #  
	0x31, 0x80, //   ##   ## 
	0x3F, 0x80, //   ####### 
	0x60, 0x80, //  ##     # 
	0x60, 0xC0, //  ##     ##
	0x40, 0xC0, //  #      ##
	0xC0, 0x40, // ##       #
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @570 'B' (9 pixels wide)
	0xFE, 0x00, // #######  
	0x83, 0x00, // #     ## 
	0x81, 0x00, // #      # 
	0x81, 0x00, // #      # 
	0x81, 0x00, // #      # 
	0x83, 0x00, // #     ## 
	0xFE, 0x00, // #######  
	0x81, 0x80, // #      ##
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x81, 0x80, // #      ##
	0xFF, 0x00, // ######## 
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @600 'C' (9 pixels wide)
	0x1E, 0x00, //    ####  
	0x61, 0x00, //  ##    # 
	0x40, 0x80, //  #      #
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x80, 0x80, // #       #
	0x40, 0x80, //  #      #
	0x61, 0x00, //  ##    # 
	0x1E, 0x00, //    ####  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @630 'D' (9 pixels wide)
	0xFE, 0x00, // #######  
	0x83, 0x00, // #     ## 
	0x81, 0x00, // #      # 
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x81, 0x00, // #      # 
	0x83, 0x00, // #     ## 
	0xFE, 0x00, // #######  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @660 'E' (8 pixels wide)
	0xFF, // ########
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0xFE, // ####### 
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0xFF, // ########
	0x00, //         
	0x00, //         
	0x00, //         

	// @675 'F' (7 pixels wide)
	0xFE, // #######
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0xFE, // #######
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x00, //        
	0x00, //        
	0x00, //        

	// @690 'G' (10 pixels wide)
	0x1F, 0x00, //    #####  
	0x20, 0x80, //   #     # 
	0x40, 0x40, //  #       #
	0xC0, 0x00, // ##        
	0x80, 0x00, // #         
	0x80, 0x00, // #         
	0x83, 0xC0, // #     ####
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x40, 0xC0, //  #      ##
	0x21, 0xC0, //   #    ###
	0x1E, 0x40, //    ####  #
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @720 'H' (9 pixels wide)
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0xFF, 0x80, // #########
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @750 'I' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @765 'J' (6 pixels wide)
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x84, // #    #
	0x84, // #    #
	0xCC, // ##  ##
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @780 'K' (8 pixels wide)
	0x83, // #     ##
	0x86, // #    ## 
	0x8C, // #   ##  
	0x98, // #  ##   
	0x90, // #  #    
	0xB0, // # ##    
	0xD8, // ## ##   
	0x8C, // #   ##  
	0x84, // #    #  
	0x86, // #    ## 
	0x83, // #     ##
	0x81, // #      #
	0x00, //         
	0x00, //         
	0x00, //         

	// @795 'L' (7 pixels wide)
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @810 'M' (11 pixels wide)
	0xC0, 0x60, // ##       ##
	0xC0, 0x60, // ##       ##
	0xE0, 0xE0, // ###     ###
	0xA0, 0xA0, // # #     # #
	0xA0, 0xA0, // # #     # #
	0xB1, 0xA0, // # ##   ## #
	0x91, 0x20, // #  #   #  #
	0x91, 0x20, // #  #   #  #
	0x9B, 0x20, // #  ## ##  #
	0x8A, 0x20, // #   # #   #
	0x8E, 0x20, // #   ###   #
	0x8E, 0x20, // #   ###   #
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @840 'N' (9 pixels wide)
	0xC0, 0x80, // ##      #
	0xC0, 0x80, // ##      #
	0xE0, 0x80, // ###     #
	0xB0, 0x80, // # ##    #
	0x90, 0x80, // #  #    #
	0x98, 0x80, // #  ##   #
	0x8C, 0x80, // #   ##  #
	0x84, 0x80, // #    #  #
	0x86, 0x80, // #    ## #
	0x83, 0x80, // #     ###
	0x81, 0x80, // #      ##
	0x81, 0x80, // #      ##
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @870 'O' (10 pixels wide)
	0x1E, 0x00, //    ####   
	0x61, 0x00, //  ##    #  
	0x40, 0x80, //  #      # 
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x40, 0x80, //  #      # 
	0x61, 0x00, //  ##    #  
	0x1E, 0x00, //    ####   
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @900 'P' (8 pixels wide)
	0xFE, // ####### 
	0x83, // #     ##
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x83, // #     ##
	0xFE, // ####### 
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x80, // #       
	0x00, //         
	0x00, //         
	0x00, //         

	// @915 'Q' (10 pixels wide)
	0x1E, 0x00, //    ####   
	0x61, 0x80, //  ##    ## 
	0x40, 0x80, //  #      # 
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x80, 0x40, // #        #
	0x42, 0x80, //  #    # # 
	0x61, 0x80, //  ##    ## 
	0x1F, 0x80, //    ###### 
	0x00, 0x40, //          #
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @945 'R' (10 pixels wide)
	0xFF, 0x00, // ########  
	0x81, 0x80, // #      ## 
	0x80, 0x80, // #       # 
	0x80, 0x80, // #       # 
	0x81, 0x80, // #      ## 
	0xFF, 0x00, // ########  
	0x81, 0x80, // #      ## 
	0x80, 0x80, // #       # 
	0x80, 0x80, // #       # 
	0x80, 0x80, // #       # 
	0x80, 0x80, // #       # 
	0x80, 0xC0, // #       ##
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @975 'S' (8 pixels wide)
	0x3C, //   ####  
	0xC3, // ##    ##
	0x81, // #      #
	0x80, // #       
	0xC0, // ##      
	0x78, //  ####   
	0x1E, //    #### 
	0x03, //       ##
	0x81, // #      #
	0x81, // #      #
	0x42, //  #    # 
	0x3C, //   ####  
	0x00, //         
	0x00, //         
	0x00, //         

	// @990 'T' (9 pixels wide)
	0xFF, 0x80, // #########
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1020 'U' (9 pixels wide)
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x41, 0x00, //  #     # 
	0x3E, 0x00, //   #####  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1050 'V' (10 pixels wide)
	0xC0, 0xC0, // ##      ##
	0x40, 0xC0, //  #      ##
	0x60, 0x80, //  ##     # 
	0x61, 0x80, //  ##    ## 
	0x21, 0x80, //   #    ## 
	0x31, 0x00, //   ##   #  
	0x13, 0x00, //    #  ##  
	0x13, 0x00, //    #  ##  
	0x1A, 0x00, //    ## #   
	0x0E, 0x00, //     ###   
	0x0E, 0x00, //     ###   
	0x0C, 0x00, //     ##    
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1080 'W' (15 pixels wide)
	0xC1, 0x06, // ##     #     ##
	0x43, 0x84, //  #    ###    # 
	0x43, 0x84, //  #    ###    # 
	0x62, 0x8C, //  ##   # #   ## 
	0x64, 0x8C, //  ##  #  #   ## 
	0x24, 0xC8, //   #  #  ##  #  
	0x24, 0x48, //   #  #   #  #  
	0x24, 0x58, //   #  #   # ##  
	0x38, 0x78, //   ###    ####  
	0x18, 0x70, //    ##    ###   
	0x18, 0x30, //    ##     ##   
	0x18, 0x30, //    ##     ##   
	0x00, 0x00, //                
	0x00, 0x00, //                
	0x00, 0x00, //                

	// @1110 'X' (9 pixels wide)
	0xC1, 0x80, // ##     ##
	0xC3, 0x00, // ##    ## 
	0x62, 0x00, //  ##   #  
	0x36, 0x00, //   ## ##  
	0x3C, 0x00, //   ####   
	0x18, 0x00, //    ##    
	0x1C, 0x00, //    ###   
	0x34, 0x00, //   ## #   
	0x26, 0x00, //   #  ##  
	0x63, 0x00, //  ##   ## 
	0xC3, 0x00, // ##    ## 
	0x81, 0x80, // #      ##
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1140 'Y' (9 pixels wide)
	0xC1, 0x80, // ##     ##
	0xC1, 0x00, // ##     # 
	0x63, 0x00, //  ##   ## 
	0x22, 0x00, //   #   #  
	0x36, 0x00, //   ## ##  
	0x14, 0x00, //    # #   
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x08, 0x00, //     #    
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1170 'Z' (9 pixels wide)
	0x7F, 0x80, //  ########
	0x01, 0x80, //        ##
	0x03, 0x00, //       ## 
	0x03, 0x00, //       ## 
	0x06, 0x00, //      ##  
	0x0C, 0x00, //     ##   
	0x0C, 0x00, //     ##   
	0x18, 0x00, //    ##    
	0x30, 0x00, //   ##     
	0x20, 0x00, //   #      
	0x60, 0x00, //  ##      
	0xFF, 0x80, // #########
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1200 '[' (3 pixels wide)
	0xE0, // ###
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0xE0, // ###

	// @1215 '\' (4 pixels wide)
	0x80, // #   
	0x80, // #   
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x10, //    #
	0x10, //    #
	0x00, //     
	0x00, //     
	0x00, //     

	// @1230 ']' (3 pixels wide)
	0xE0, // ###
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xE0, // ###

	// @1245 '^' (6 pixels wide)
	0x00, //       
	0x30, //   ##  
	0x30, //   ##  
	0x50, //  # #  
	0x48, //  #  # 
	0x88, // #   # 
	0x8C, // #   ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @1260 '_' (9 pixels wide)
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0xFF, 0x80, // #########

	// @1290 '`' (2 pixels wide)
	0x80, // # 
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @1305 'a' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x7C, //  #####  
	0x82, // #     # 
	0x02, //       # 
	0x02, //       # 
	0x3E, //   ##### 
	0xE2, // ###   # 
	0x82, // #     # 
	0x86, // #    ## 
	0x7B, //  #### ##
	0x00, //         
	0x00, //         
	0x00, //         

	// @1320 'b' (7 pixels wide)
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0xB8, // # ###  
	0xC4, // ##   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0xC4, // ##   # 
	0xB8, // # ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @1335 'c' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x46, //  #   ##
	0x82, // #     #
	0x80, // #      
	0x80, // #      
	0x80, // #      
	0x82, // #     #
	0x46, //  #   ##
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1350 'd' (8 pixels wide)
	0x01, //        #
	0x01, //        #
	0x01, //        #
	0x3D, //   #### #
	0x43, //  #    ##
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x43, //  #    ##
	0x3D, //   #### #
	0x00, //         
	0x00, //         
	0x00, //         

	// @1365 'e' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x3C, //   ####  
	0x42, //  #    # 
	0x81, // #      #
	0x81, // #      #
	0xFF, // ########
	0x80, // #       
	0x80, // #       
	0x43, //  #    ##
	0x3E, //   ##### 
	0x00, //         
	0x00, //         
	0x00, //         

	// @1380 'f' (3 pixels wide)
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x00, //    
	0x00, //    
	0x00, //    

	// @1395 'g' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x3A, //   ### #
	0x46, //  #   ##
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x46, //  #   ##
	0x3A, //   ### #
	0x02, //       #
	0x84, // #    # 
	0x7C, //  ##### 

	// @1410 'h' (6 pixels wide)
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0xB8, // # ### 
	0xC4, // ##   #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1425 'i' (1 pixels wide)
	0x80, // #
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @1440 'j' (2 pixels wide)
	0x40, //  #
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0xC0, // ##

	// @1455 'k' (6 pixels wide)
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x8C, // #   ##
	0x98, // #  ## 
	0xB0, // # ##  
	0xF0, // ####  
	0xD0, // ## #  
	0x98, // #  ## 
	0x88, // #   # 
	0x8C, // #   ##
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1470 'l' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @1485 'm' (11 pixels wide)
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0xB9, 0xC0, // # ###  ### 
	0xC6, 0x20, // ##   ##   #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @1515 'n' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xB8, // # ### 
	0xC4, // ##   #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1530 'o' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x3C, //   ####  
	0x42, //  #    # 
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x42, //  #    # 
	0x3C, //   ####  
	0x00, //         
	0x00, //         
	0x00, //         

	// @1545 'p' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0xB8, // # ###  
	0xC4, // ##   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0xC4, // ##   # 
	0xB8, // # ###  
	0x80, // #      
	0x80, // #      
	0x80, // #      

	// @1560 'q' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x3D, //   #### #
	0x43, //  #    ##
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x81, // #      #
	0x43, //  #    ##
	0x3D, //   #### #
	0x01, //        #
	0x01, //        #
	0x01, //        #

	// @1575 'r' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0xB0, // # ##
	0xC0, // ##  
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @1590 's' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x78, //  #### 
	0xC4, // ##   #
	0x80, // #     
	0x80, // #     
	0x60, //  ##   
	0x1C, //    ###
	0x04, //      #
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1605 't' (3 pixels wide)
	0x00, //    
	0x40, //  # 
	0x40, //  # 
	0xE0, // ###
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x60, //  ##
	0x00, //    
	0x00, //    
	0x00, //    

	// @1620 'u' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x8C, // #   ##
	0x74, //  ### #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1635 'v' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0xC3, // ##    ##
	0x42, //  #    # 
	0x46, //  #   ## 
	0x66, //  ##  ## 
	0x24, //   #  #  
	0x2C, //   # ##  
	0x38, //   ###   
	0x18, //    ##   
	0x18, //    ##   
	0x00, //         
	0x00, //         
	0x00, //         

	// @1650 'w' (11 pixels wide)
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            
	0xC6, 0x20, // ##   ##   #
	0xC6, 0x20, // ##   ##   #
	0x4E, 0x60, //  #  ###  ##
	0x4A, 0x40, //  #  # #  # 
	0x6B, 0x40, //  ## # ## # 
	0x6B, 0x40, //  ## # ## # 
	0x39, 0xC0, //   ###  ### 
	0x31, 0x80, //   ##   ##  
	0x31, 0x80, //   ##   ##  
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @1680 'x' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x42, //  #    #
	0x64, //  ##  # 
	0x2C, //   # ## 
	0x18, //    ##  
	0x18, //    ##  
	0x38, //   ###  
	0x2C, //   # ## 
	0x66, //  ##  ##
	0xC2, // ##    #
	0x00, //        
	0x00, //        
	0x00, //        

	// @1695 'y' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0xC2, // ##    #
	0x42, //  #    #
	0x46, //  #   ##
	0x64, //  ##  # 
	0x24, //   #  # 
	0x2C, //   # ## 
	0x38, //   ###  
	0x18, //    ##  
	0x18, //    ##  
	0x10, //    #   
	0x10, //    #   
	0x60, //  ##    

	// @1710 'z' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x7E, //  ######
	0x06, //      ##
	0x0C, //     ## 
	0x08, //     #  
	0x18, //    ##  
	0x30, //   ##   
	0x20, //   #    
	0x40, //  #     
	0xFE, // #######
	0x00, //        
	0x00, //        
	0x00, //        

	// @1725 '{' (3 pixels wide)
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x60, //  ##

	// @1740 '|' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #

	// @1755 '}' (3 pixels wide)
	0xC0, // ## 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xC0, // ## 

	// @1770 '~' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x60, //  ##    
	0x92, // #  #  #
	0x0E, //     ###
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
};

// Character descriptors for FreeSans 12pt
// { [Char width in bits], [Offset into freeSans_12ptCharBitmaps in bytes] }
static const CharDesc_t s_FreeSans12ptCharDesc[] = {
	{1, s_FreeSans12ptBitmaps + 0}, 		// !
	{3, s_FreeSans12ptBitmaps + 15}, 		// "
	{9, s_FreeSans12ptBitmaps + 30}, 		// #
	{7, s_FreeSans12ptBitmaps + 60}, 		// $
	{14,s_FreeSans12ptBitmaps + 75}, 		// %
	{9, s_FreeSans12ptBitmaps + 105}, 		// &
	{1, s_FreeSans12ptBitmaps + 135}, 		// '
	{3, s_FreeSans12ptBitmaps + 150}, 		// (
	{3, s_FreeSans12ptBitmaps + 165}, 		// )
	{5, s_FreeSans12ptBitmaps + 180}, 		// *
	{7, s_FreeSans12ptBitmaps + 195}, 		// +
	{1, s_FreeSans12ptBitmaps + 210}, 		// ,
	{4, s_FreeSans12ptBitmaps + 225}, 		// -
	{1, s_FreeSans12ptBitmaps + 240}, 		// .
	{4, s_FreeSans12ptBitmaps + 255}, 		// /
	{7, s_FreeSans12ptBitmaps + 270}, 		// 0
	{3, s_FreeSans12ptBitmaps + 285}, 		// 1
	{7, s_FreeSans12ptBitmaps + 300}, 		// 2
	{7, s_FreeSans12ptBitmaps + 315}, 		// 3
	{8, s_FreeSans12ptBitmaps + 330}, 		// 4
	{7, s_FreeSans12ptBitmaps + 345}, 		// 5
	{7, s_FreeSans12ptBitmaps + 360}, 		// 6
	{7, s_FreeSans12ptBitmaps + 375}, 		// 7
	{7, s_FreeSans12ptBitmaps + 390}, 		// 8
	{7, s_FreeSans12ptBitmaps + 405}, 		// 9
	{1, s_FreeSans12ptBitmaps + 420}, 		// :
	{1, s_FreeSans12ptBitmaps + 435}, 		// ;
	{8, s_FreeSans12ptBitmaps + 450}, 		// <
	{8, s_FreeSans12ptBitmaps + 465}, 		// =
	{8, s_FreeSans12ptBitmaps + 480}, 		// >
	{7, s_FreeSans12ptBitmaps + 495}, 		// ?
	{14,s_FreeSans12ptBitmaps + 510}, 		// @
	{10,s_FreeSans12ptBitmaps + 540}, 		// A
	{9, s_FreeSans12ptBitmaps + 570}, 		// B
	{9, s_FreeSans12ptBitmaps + 600}, 		// C
	{9, s_FreeSans12ptBitmaps + 630}, 		// D
	{8, s_FreeSans12ptBitmaps + 660}, 		// E
	{7, s_FreeSans12ptBitmaps + 675}, 		// F
	{10,s_FreeSans12ptBitmaps + 690}, 		// G
	{9, s_FreeSans12ptBitmaps + 720}, 		// H
	{1, s_FreeSans12ptBitmaps + 750}, 		// I
	{6, s_FreeSans12ptBitmaps + 765}, 		// J
	{8, s_FreeSans12ptBitmaps + 780}, 		// K
	{7, s_FreeSans12ptBitmaps + 795}, 		// L
	{11,s_FreeSans12ptBitmaps + 810}, 		// M
	{9, s_FreeSans12ptBitmaps + 840}, 		// N
	{10,s_FreeSans12ptBitmaps + 870}, 		// O
	{8, s_FreeSans12ptBitmaps + 900}, 		// P
	{10,s_FreeSans12ptBitmaps + 915}, 		// Q
	{10,s_FreeSans12ptBitmaps + 945}, 		// R
	{8, s_FreeSans12ptBitmaps + 975}, 		// S
	{9, s_FreeSans12ptBitmaps + 990}, 		// T
	{9, s_FreeSans12ptBitmaps + 1020}, 		// U
	{10,s_FreeSans12ptBitmaps + 1050}, 		// V
	{15,s_FreeSans12ptBitmaps + 1080}, 		// W
	{9, s_FreeSans12ptBitmaps + 1110}, 		// X
	{9, s_FreeSans12ptBitmaps + 1140}, 		// Y
	{9, s_FreeSans12ptBitmaps + 1170}, 		// Z
	{3, s_FreeSans12ptBitmaps + 1200}, 		// [
	{4, s_FreeSans12ptBitmaps + 1215}, 		// '\'
	{3, s_FreeSans12ptBitmaps + 1230}, 		// ]
	{6, s_FreeSans12ptBitmaps + 1245}, 		// ^
	{9, s_FreeSans12ptBitmaps + 1260}, 		// _
	{2, s_FreeSans12ptBitmaps + 1290}, 		// `
	{8, s_FreeSans12ptBitmaps + 1305}, 		// a
	{7, s_FreeSans12ptBitmaps + 1320}, 		// b
	{7, s_FreeSans12ptBitmaps + 1335}, 		// c
	{8, s_FreeSans12ptBitmaps + 1350}, 		// d
	{8, s_FreeSans12ptBitmaps + 1365}, 		// e
	{3, s_FreeSans12ptBitmaps + 1380}, 		// f
	{7, s_FreeSans12ptBitmaps + 1395}, 		// g
	{6, s_FreeSans12ptBitmaps + 1410}, 		// h
	{1, s_FreeSans12ptBitmaps + 1425}, 		// i
	{2, s_FreeSans12ptBitmaps + 1440}, 		// j
	{6, s_FreeSans12ptBitmaps + 1455}, 		// k
	{1, s_FreeSans12ptBitmaps + 1470}, 		// l
	{11,s_FreeSans12ptBitmaps + 1485}, 		// m
	{6, s_FreeSans12ptBitmaps + 1515}, 		// n
	{8, s_FreeSans12ptBitmaps + 1530}, 		// o
	{7, s_FreeSans12ptBitmaps + 1545}, 		// p
	{8, s_FreeSans12ptBitmaps + 1560}, 		// q
	{4, s_FreeSans12ptBitmaps + 1575}, 		// r
	{6, s_FreeSans12ptBitmaps + 1590}, 		// s
	{3, s_FreeSans12ptBitmaps + 1605}, 		// t
	{6, s_FreeSans12ptBitmaps + 1620}, 		// u
	{8, s_FreeSans12ptBitmaps + 1635}, 		// v
	{11,s_FreeSans12ptBitmaps + 1650}, 		// w
	{7, s_FreeSans12ptBitmaps + 1680}, 		// x
	{7, s_FreeSans12ptBitmaps + 1695}, 		// y
	{7, s_FreeSans12ptBitmaps + 1710}, 		// z
	{3, s_FreeSans12ptBitmaps + 1725}, 		// {
	{1, s_FreeSans12ptBitmaps + 1740}, 		// |
	{3, s_FreeSans12ptBitmaps + 1755}, 		// }
	{7, s_FreeSans12ptBitmaps + 1770}, 		// ~
};

// Font information for FreeSans 12pt
const FontDesc_t iFontFreeSans12pt = {
	0,
	15,
	15,
	{.pCharDesc = s_FreeSans12ptCharDesc }
};
