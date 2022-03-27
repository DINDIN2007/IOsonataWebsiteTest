// 
//  Font data for FreeSans 10pt
// 	https://savannah.gnu.org/projects/freefont/
// 
// 	Font bitmap generated by
// 	http://www.eran.io/the-dot-factory-an-lcd-font-and-image-generator

#include "display/ifont.h"

// Character bitmaps for FreeSans 10pt
static const uint8_t s_FreeSansIta10ptBitmaps[] = {
	// @0 '!' (3 pixels wide)
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0x00, //    
	0x80, // #  
	0x00, //    
	0x00, //    
	0x00, //    

	// @13 '"' (3 pixels wide)
	0x00, //    
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

	// @26 '#' (7 pixels wide)
	0x0A, //     # #
	0x12, //    #  #
	0x14, //    # # 
	0x7E, //  ######
	0x24, //   #  # 
	0x28, //   # #  
	0x48, //  #  #  
	0xFC, // ###### 
	0x50, //  # #   
	0x90, // #  #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @39 '$' (7 pixels wide)
	0x08, //     #  
	0x3C, //   #### 
	0x6A, //  ## # #
	0x50, //  # #   
	0x70, //  ###   
	0x38, //   ###  
	0x14, //    # # 
	0x94, // #  # # 
	0xAC, // # # ## 
	0x78, //  ####  
	0x20, //   #    
	0x20, //   #    
	0x00, //        

	// @52 '%' (10 pixels wide)
	0x00, 0x00, //           
	0x70, 0x80, //  ###    # 
	0x91, 0x00, // #  #   #  
	0x92, 0x00, // #  #  #   
	0xE4, 0x00, // ###  #    
	0x08, 0x00, //     #     
	0x0B, 0x80, //     # ### 
	0x14, 0x40, //    # #   #
	0x24, 0x40, //   #  #   #
	0x43, 0x80, //  #    ### 
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @78 '&' (8 pixels wide)
	0x00, //         
	0x1E, //    #### 
	0x22, //   #   # 
	0x22, //   #   # 
	0x3C, //   ####  
	0x38, //   ###   
	0x4D, //  #  ## #
	0x86, // #    ## 
	0x8E, // #   ### 
	0x73, //  ###  ##
	0x00, //         
	0x00, //         
	0x00, //         

	// @91 ''' (1 pixels wide)
	0x00, //  
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

	// @104 '(' (4 pixels wide)
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x00, //     

	// @117 ')' (4 pixels wide)
	0x00, //     
	0x20, //   # 
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x80, // #   

	// @130 '*' (4 pixels wide)
	0x20, //   # 
	0xF0, // ####
	0x60, //  ## 
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

	// @143 '+' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x10, //    #   
	0xFE, // #######
	0x10, //    #   
	0x10, //    #   
	0x20, //   #    
	0x00, //        
	0x00, //        
	0x00, //        

	// @156 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0xC0, // ##
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @169 '-' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @182 '.' (1 pixels wide)
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

	// @195 '/' (5 pixels wide)
	0x08, //     #
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x80, // #    
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      

	// @208 '0' (7 pixels wide)
	0x00, //        
	0x1C, //    ### 
	0x22, //   #   #
	0x42, //  #    #
	0x42, //  #    #
	0x82, // #     #
	0x82, // #     #
	0x84, // #    # 
	0x8C, // #   ## 
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @221 '1' (4 pixels wide)
	0x00, //     
	0x10, //    #
	0x30, //   ##
	0xE0, // ### 
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x00, //     

	// @234 '2' (7 pixels wide)
	0x00, //        
	0x1C, //    ### 
	0x22, //   #   #
	0x42, //  #    #
	0x02, //       #
	0x0C, //     ## 
	0x30, //   ##   
	0x40, //  #     
	0x80, // #      
	0xFC, // ###### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @247 '3' (7 pixels wide)
	0x00, //        
	0x3C, //   #### 
	0x62, //  ##   #
	0x02, //       #
	0x04, //      # 
	0x18, //    ##  
	0x04, //      # 
	0x84, // #    # 
	0x8C, // #   ## 
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @260 '4' (6 pixels wide)
	0x00, //       
	0x04, //      #
	0x0C, //     ##
	0x14, //    # #
	0x2C, //   # ##
	0x48, //  #  # 
	0x88, // #   # 
	0xFC, // ######
	0x08, //     # 
	0x10, //    #  
	0x00, //       
	0x00, //       
	0x00, //       

	// @273 '5' (7 pixels wide)
	0x00, //        
	0x3E, //   #####
	0x20, //   #    
	0x40, //  #     
	0x78, //  ####  
	0x44, //  #   # 
	0x04, //      # 
	0x04, //      # 
	0x88, // #   #  
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @286 '6' (7 pixels wide)
	0x00, //        
	0x1C, //    ### 
	0x22, //   #   #
	0x40, //  #     
	0x78, //  ####  
	0xC4, // ##   # 
	0x84, // #    # 
	0x84, // #    # 
	0x88, // #   #  
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @299 '7' (7 pixels wide)
	0x00, //        
	0xFE, // #######
	0x04, //      # 
	0x08, //     #  
	0x10, //    #   
	0x30, //   ##   
	0x20, //   #    
	0x40, //  #     
	0xC0, // ##     
	0x80, // #      
	0x00, //        
	0x00, //        
	0x00, //        

	// @312 '8' (7 pixels wide)
	0x00, //        
	0x3C, //   #### 
	0x62, //  ##   #
	0x42, //  #    #
	0x44, //  #   # 
	0x38, //   ###  
	0xC4, // ##   # 
	0x84, // #    # 
	0x88, // #   #  
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @325 '9' (7 pixels wide)
	0x00, //        
	0x1C, //    ### 
	0x22, //   #   #
	0x42, //  #    #
	0x42, //  #    #
	0x46, //  #   ##
	0x3C, //   #### 
	0x04, //      # 
	0x88, // #   #  
	0x70, //  ###   
	0x00, //        
	0x00, //        
	0x00, //        

	// @338 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x80, // # 
	0x00, //   
	0x00, //   
	0x00, //   

	// @351 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0xC0, // ##
	0x80, // # 
	0x80, // # 
	0x00, //   

	// @364 '<' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x06, //      ##
	0x18, //    ##  
	0xE0, // ###    
	0x60, //  ##    
	0x18, //    ##  
	0x04, //      # 
	0x00, //        
	0x00, //        
	0x00, //        

	// @377 '=' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x7E, //  ######
	0x00, //        
	0x00, //        
	0xFC, // ###### 
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @390 '>' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x40, //  #     
	0x30, //   ##   
	0x0C, //     ## 
	0x0E, //     ###
	0x30, //   ##   
	0xC0, // ##     
	0x00, //        
	0x00, //        
	0x00, //        

	// @403 '?' (6 pixels wide)
	0x38, //   ### 
	0x44, //  #   #
	0x84, // #    #
	0x04, //      #
	0x08, //     # 
	0x30, //   ##  
	0x20, //   #   
	0x00, //       
	0x00, //       
	0x40, //  #    
	0x00, //       
	0x00, //       
	0x00, //       

	// @416 '@' (12 pixels wide)
	0x07, 0xC0, //      #####  
	0x18, 0x60, //    ##    ## 
	0x20, 0x30, //   #       ##
	0x47, 0x50, //  #   ### # #
	0x48, 0x90, //  #  #   #  #
	0x91, 0x90, // #  #   ##  #
	0x91, 0x30, // #  #   #  ##
	0x93, 0x60, // #  #  ## ## 
	0x9D, 0xC0, // #  ### ###  
	0xC0, 0x00, // ##          
	0x60, 0x00, //  ##         
	0x3F, 0x00, //   ######    
	0x00, 0x00, //             

	// @442 'A' (8 pixels wide)
	0x06, //      ## 
	0x06, //      ## 
	0x0E, //     ### 
	0x0B, //     # ##
	0x13, //    #  ##
	0x11, //    #   #
	0x3F, //   ######
	0x21, //   #    #
	0x41, //  #     #
	0xC1, // ##     #
	0x00, //         
	0x00, //         
	0x00, //         

	// @455 'B' (9 pixels wide)
	0x3F, 0x00, //   ###### 
	0x20, 0x80, //   #     #
	0x20, 0x80, //   #     #
	0x61, 0x00, //  ##    # 
	0x7E, 0x00, //  ######  
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0x82, 0x00, // #     #  
	0xFC, 0x00, // ######   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @481 'C' (9 pixels wide)
	0x0F, 0x00, //     #### 
	0x31, 0x80, //   ##   ##
	0x40, 0x80, //  #      #
	0x40, 0x00, //  #       
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x80, 0x00, // #        
	0x81, 0x00, // #      # 
	0xC3, 0x00, // ##    ## 
	0x7C, 0x00, //  #####   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @507 'D' (9 pixels wide)
	0x3F, 0x00, //   ###### 
	0x21, 0x80, //   #    ##
	0x20, 0x80, //   #     #
	0x60, 0x80, //  ##     #
	0x40, 0x80, //  #      #
	0x40, 0x80, //  #      #
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0xC2, 0x00, // ##    #  
	0xFC, 0x00, // ######   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @533 'E' (9 pixels wide)
	0x3F, 0x80, //   #######
	0x20, 0x00, //   #      
	0x20, 0x00, //   #      
	0x60, 0x00, //  ##      
	0x7E, 0x00, //  ######  
	0x40, 0x00, //  #       
	0x40, 0x00, //  #       
	0x40, 0x00, //  #       
	0xC0, 0x00, // ##       
	0xFE, 0x00, // #######  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @559 'F' (8 pixels wide)
	0x3F, //   ######
	0x20, //   #     
	0x20, //   #     
	0x60, //  ##     
	0x7E, //  ###### 
	0x40, //  #      
	0x40, //  #      
	0x40, //  #      
	0xC0, // ##      
	0x80, // #       
	0x00, //         
	0x00, //         
	0x00, //         

	// @572 'G' (9 pixels wide)
	0x1F, 0x00, //    ##### 
	0x21, 0x80, //   #    ##
	0x40, 0x80, //  #      #
	0x40, 0x00, //  #       
	0x80, 0x00, // #        
	0x87, 0x80, // #    ####
	0x80, 0x80, // #       #
	0x81, 0x00, // #      # 
	0xC3, 0x00, // ##    ## 
	0x7D, 0x00, //  ##### # 
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @598 'H' (9 pixels wide)
	0x20, 0x80, //   #     #
	0x20, 0x80, //   #     #
	0x20, 0x80, //   #     #
	0x61, 0x80, //  ##    ##
	0x7F, 0x00, //  ####### 
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0xC3, 0x00, // ##    ## 
	0x82, 0x00, // #     #  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @624 'I' (3 pixels wide)
	0x20, //   #
	0x20, //   #
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xC0, // ## 
	0x80, // #  
	0x80, // #  
	0x00, //    
	0x00, //    
	0x00, //    

	// @637 'J' (6 pixels wide)
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x08, //     # 
	0x08, //     # 
	0x08, //     # 
	0x88, // #   # 
	0x90, // #  #  
	0x70, //  ###  
	0x00, //       
	0x00, //       
	0x00, //       

	// @650 'K' (9 pixels wide)
	0x21, 0x80, //   #    ##
	0x23, 0x00, //   #   ## 
	0x26, 0x00, //   #  ##  
	0x6C, 0x00, //  ## ##   
	0x58, 0x00, //  # ##    
	0x6C, 0x00, //  ## ##   
	0x44, 0x00, //  #   #   
	0x44, 0x00, //  #   #   
	0xC6, 0x00, // ##   ##  
	0x82, 0x00, // #     #  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @676 'L' (6 pixels wide)
	0x20, //   #   
	0x20, //   #   
	0x20, //   #   
	0x60, //  ##   
	0x40, //  #    
	0x40, //  #    
	0x40, //  #    
	0x40, //  #    
	0xC0, // ##    
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @689 'M' (11 pixels wide)
	0x30, 0x60, //   ##     ##
	0x30, 0xE0, //   ##    ###
	0x30, 0xC0, //   ##    ## 
	0x71, 0xC0, //  ###   ### 
	0x51, 0x40, //  # #   # # 
	0x53, 0x40, //  # #  ## # 
	0x52, 0xC0, //  # #  # ## 
	0x4C, 0x80, //  #  ##  #  
	0xCC, 0x80, // ##  ##  #  
	0x88, 0x80, // #   #   #  
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @715 'N' (9 pixels wide)
	0x30, 0x80, //   ##    #
	0x30, 0x80, //   ##    #
	0x30, 0x80, //   ##    #
	0x78, 0x80, //  ####   #
	0x49, 0x80, //  #  #  ##
	0x4D, 0x00, //  #  ## # 
	0x45, 0x00, //  #   # # 
	0x45, 0x00, //  #   # # 
	0xC7, 0x00, // ##   ### 
	0x83, 0x00, // #     ## 
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @741 'O' (9 pixels wide)
	0x1F, 0x00, //    ##### 
	0x21, 0x00, //   #    # 
	0x40, 0x80, //  #      #
	0x40, 0x80, //  #      #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x81, 0x80, // #      ##
	0x81, 0x00, // #      # 
	0x42, 0x00, //  #    #  
	0x3C, 0x00, //   ####   
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @767 'P' (8 pixels wide)
	0x3E, //   ##### 
	0x21, //   #    #
	0x21, //   #    #
	0x61, //  ##    #
	0x42, //  #    # 
	0x7C, //  #####  
	0x40, //  #      
	0x40, //  #      
	0xC0, // ##      
	0x80, // #       
	0x00, //         
	0x00, //         
	0x00, //         

	// @780 'Q' (9 pixels wide)
	0x1E, 0x00, //    ####  
	0x21, 0x00, //   #    # 
	0x40, 0x80, //  #      #
	0x40, 0x80, //  #      #
	0x80, 0x80, // #       #
	0x80, 0x80, // #       #
	0x81, 0x00, // #      # 
	0x85, 0x00, // #    # # 
	0x46, 0x00, //  #   ##  
	0x3F, 0x00, //   ###### 
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @806 'R' (9 pixels wide)
	0x3F, 0x00, //   ###### 
	0x20, 0x80, //   #     #
	0x20, 0x80, //   #     #
	0x60, 0x80, //  ##     #
	0x41, 0x00, //  #     # 
	0x7F, 0x00, //  ####### 
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0xC1, 0x00, // ##     # 
	0x81, 0x00, // #      # 
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @832 'S' (8 pixels wide)
	0x1E, //    #### 
	0x21, //   #    #
	0x41, //  #     #
	0x40, //  #      
	0x70, //  ###    
	0x1E, //    #### 
	0x02, //       # 
	0x82, // #     # 
	0x84, // #    #  
	0x78, //  ####   
	0x00, //         
	0x00, //         
	0x00, //         

	// @845 'T' (8 pixels wide)
	0xFF, // ########
	0x10, //    #    
	0x10, //    #    
	0x10, //    #    
	0x30, //   ##    
	0x30, //   ##    
	0x20, //   #     
	0x20, //   #     
	0x20, //   #     
	0x60, //  ##     
	0x00, //         
	0x00, //         
	0x00, //         

	// @858 'U' (8 pixels wide)
	0x41, //  #     #
	0x41, //  #     #
	0x41, //  #     #
	0xC3, // ##    ##
	0x82, // #     # 
	0x82, // #     # 
	0x82, // #     # 
	0x86, // #    ## 
	0x84, // #    #  
	0x78, //  ####   
	0x00, //         
	0x00, //         
	0x00, //         

	// @871 'V' (8 pixels wide)
	0xC1, // ##     #
	0xC2, // ##    # 
	0x42, //  #    # 
	0x44, //  #   #  
	0x44, //  #   #  
	0x48, //  #  #   
	0x48, //  #  #   
	0x50, //  # #    
	0x70, //  ###    
	0x60, //  ##     
	0x00, //         
	0x00, //         
	0x00, //         

	// @884 'W' (12 pixels wide)
	0x86, 0x30, // #    ##   ##
	0x86, 0x20, // #    ##   # 
	0x8E, 0x20, // #   ###   # 
	0x8A, 0x40, // #   # #  #  
	0x9A, 0x40, // #  ## #  #  
	0x92, 0xC0, // #  #  # ##  
	0xB2, 0x80, // # ##  # #   
	0xA2, 0x80, // # #   # #   
	0xC3, 0x00, // ##    ##    
	0xC3, 0x00, // ##    ##    
	0x00, 0x00, //             
	0x00, 0x00, //             
	0x00, 0x00, //             

	// @910 'X' (9 pixels wide)
	0x21, 0x80, //   #    ##
	0x31, 0x00, //   ##   # 
	0x12, 0x00, //    #  #  
	0x14, 0x00, //    # #   
	0x08, 0x00, //     #    
	0x18, 0x00, //    ##    
	0x3C, 0x00, //   ####   
	0x64, 0x00, //  ##  #   
	0x46, 0x00, //  #   ##  
	0x82, 0x00, // #     #  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @936 'Y' (8 pixels wide)
	0xC1, // ##     #
	0x42, //  #    # 
	0x66, //  ##  ## 
	0x2C, //   # ##  
	0x28, //   # #   
	0x30, //   ##    
	0x10, //    #    
	0x30, //   ##    
	0x20, //   #     
	0x20, //   #     
	0x00, //         
	0x00, //         
	0x00, //         

	// @949 'Z' (8 pixels wide)
	0x3F, //   ######
	0x03, //       ##
	0x06, //      ## 
	0x04, //      #  
	0x08, //     #   
	0x10, //    #    
	0x20, //   #     
	0x60, //  ##     
	0xC0, // ##      
	0xFE, // ####### 
	0x00, //         
	0x00, //         
	0x00, //         

	// @962 '[' (5 pixels wide)
	0x18, //    ##
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0xE0, // ###  

	// @975 '\' (1 pixels wide)
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

	// @988 ']' (5 pixels wide)
	0x38, //   ###
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0xC0, // ##   

	// @1001 '^' (5 pixels wide)
	0x00, //      
	0x18, //    ##
	0x28, //   # #
	0x28, //   # #
	0x48, //  #  #
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @1014 '_' (8 pixels wide)
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
	0xFF, // ########
	0x00, //         

	// @1027 '`' (1 pixels wide)
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
	0x00, //  
	0x00, //  

	// @1040 'a' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x3C, //   ####
	0x44, //  #   #
	0x04, //      #
	0x7C, //  #####
	0x88, // #   # 
	0x88, // #   # 
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @1053 'b' (7 pixels wide)
	0x20, //   #    
	0x20, //   #    
	0x40, //  #     
	0x7C, //  ##### 
	0x62, //  ##   #
	0x42, //  #    #
	0x42, //  #    #
	0xC2, // ##    #
	0xC4, // ##   # 
	0xF8, // #####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @1066 'c' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1079 'd' (7 pixels wide)
	0x02, //       #
	0x02, //       #
	0x02, //       #
	0x3A, //   ### #
	0x46, //  #   ##
	0x84, // #    # 
	0x84, // #    # 
	0x84, // #    # 
	0x8C, // #   ## 
	0x7C, //  ##### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @1092 'e' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x84, // #    #
	0xFC, // ######
	0x80, // #     
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1105 'f' (4 pixels wide)
	0x30, //   ##
	0x20, //   # 
	0x20, //   # 
	0xE0, // ### 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @1118 'g' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x1D, //    ### #
	0x23, //   #   ##
	0x42, //  #    # 
	0x42, //  #    # 
	0x42, //  #    # 
	0x46, //  #   ## 
	0x7E, //  ###### 
	0x0C, //     ##  
	0x8C, // #   ##  
	0x78, //  ####   

	// @1131 'h' (6 pixels wide)
	0x20, //   #   
	0x20, //   #   
	0x40, //  #    
	0x7C, //  #####
	0x64, //  ##  #
	0x44, //  #   #
	0x44, //  #   #
	0x84, // #    #
	0x88, // #   # 
	0x88, // #   # 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1144 'i' (3 pixels wide)
	0x20, //   #
	0x00, //    
	0x00, //    
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xC0, // ## 
	0x80, // #  
	0x80, // #  
	0x00, //    
	0x00, //    
	0x00, //    

	// @1157 'j' (5 pixels wide)
	0x08, //     #
	0x00, //      
	0x00, //      
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0xC0, // ##   

	// @1170 'k' (6 pixels wide)
	0x20, //   #   
	0x20, //   #   
	0x40, //  #    
	0x44, //  #   #
	0x58, //  # ## 
	0x70, //  ###  
	0x50, //  # #  
	0x98, // #  ## 
	0x88, // #   # 
	0x88, // #   # 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1183 'l' (3 pixels wide)
	0x20, //   #
	0x20, //   #
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xC0, // ## 
	0x80, // #  
	0x80, // #  
	0x00, //    
	0x00, //    
	0x00, //    

	// @1196 'm' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x5D, 0xC0, //  # ### ###
	0x66, 0x40, //  ##  ##  #
	0x44, 0x40, //  #   #   #
	0xC4, 0xC0, // ##   #  ##
	0x88, 0x80, // #   #   # 
	0x88, 0x80, // #   #   # 
	0x88, 0x80, // #   #   # 
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1222 'n' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x5C, //  # ###
	0x64, //  ##  #
	0x44, //  #   #
	0xC4, // ##   #
	0x8C, // #   ##
	0x88, // #   # 
	0x88, // #   # 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1235 'o' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1248 'p' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x2E, //   # ### 
	0x31, //   ##   #
	0x21, //   #    #
	0x41, //  #     #
	0x41, //  #     #
	0x62, //  ##   # 
	0x7C, //  #####  
	0x40, //  #      
	0x80, // #       
	0x80, // #       

	// @1261 'q' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x3A, //   ### #
	0x46, //  #   ##
	0x84, // #    # 
	0x84, // #    # 
	0x84, // #    # 
	0x8C, // #   ## 
	0x7C, //  ##### 
	0x08, //     #  
	0x08, //     #  
	0x08, //     #  

	// @1274 'r' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x50, //  # #
	0x60, //  ## 
	0x40, //  #  
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @1287 's' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x38, //   ###
	0x48, //  #  #
	0x40, //  #   
	0x70, //  ### 
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @1300 't' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x40, //  # 
	0xE0, // ###
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0xC0, // ## 
	0x00, //    
	0x00, //    
	0x00, //    

	// @1313 'u' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x42, //  #    #
	0x44, //  #   # 
	0x44, //  #   # 
	0x84, // #    # 
	0x84, // #    # 
	0x8C, // #   ## 
	0xF8, // #####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @1326 'v' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x88, // #   # 
	0x98, // #  ## 
	0x90, // #  #  
	0x60, //  ##   
	0x60, //  ##   
	0x40, //  #    
	0x00, //       
	0x00, //       
	0x00, //       

	// @1339 'w' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x00, //         
	0x99, // #  ##  #
	0x99, // #  ##  #
	0x9B, // #  ## ##
	0xAA, // # # # # 
	0xAE, // # # ### 
	0xCC, // ##  ##  
	0xCC, // ##  ##  
	0x00, //         
	0x00, //         
	0x00, //         

	// @1352 'x' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x44, //  #   #
	0x68, //  ## # 
	0x30, //   ##  
	0x30, //   ##  
	0x70, //  ###  
	0x50, //  # #  
	0x88, // #   # 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1365 'y' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x22, //   #   #
	0x22, //   #   #
	0x24, //   #  # 
	0x2C, //   # ## 
	0x28, //   # #  
	0x30, //   ##   
	0x30, //   ##   
	0x20, //   #    
	0x20, //   #    
	0xC0, // ##     

	// @1378 'z' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x7C, //  #####
	0x0C, //     ##
	0x18, //    ## 
	0x20, //   #   
	0x40, //  #    
	0x80, // #     
	0xF8, // ##### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @1391 '{' (5 pixels wide)
	0x18, //    ##
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x80, // #    
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x80, // #    
	0x80, // #    
	0xC0, // ##   

	// @1404 '|' (3 pixels wide)
	0x20, //   #
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x00, //    

	// @1417 '}' (5 pixels wide)
	0x18, //    ##
	0x08, //     #
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x08, //     #
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0xC0, // ##   

	// @1430 '~' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x60, //  ##   
	0xB4, // # ## #
	0x18, //    ## 
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
};

// Character descriptors for FreeSans 10pt
// { [Char width in bits], [Offset into freeSans_10ptCharBitmaps in bytes] }
static const CharDesc_t s_FreeSansIta10ptCharDesc[] = {
	{3, s_FreeSansIta10ptBitmaps + 0}, 			// !
	{3, s_FreeSansIta10ptBitmaps + 13}, 		// "
	{7, s_FreeSansIta10ptBitmaps + 26}, 		// #
	{7, s_FreeSansIta10ptBitmaps + 39}, 		// $
	{10,s_FreeSansIta10ptBitmaps + 52}, 		// %
	{8, s_FreeSansIta10ptBitmaps + 78}, 		// &
	{1, s_FreeSansIta10ptBitmaps + 91}, 		// '
	{4, s_FreeSansIta10ptBitmaps + 104}, 		// (
	{4, s_FreeSansIta10ptBitmaps + 117}, 		// )
	{4, s_FreeSansIta10ptBitmaps + 130}, 		// *
	{7, s_FreeSansIta10ptBitmaps + 143}, 		// +
	{2, s_FreeSansIta10ptBitmaps + 156}, 		// ,
	{3, s_FreeSansIta10ptBitmaps + 169}, 		// -
	{1, s_FreeSansIta10ptBitmaps + 182}, 		// .
	{5, s_FreeSansIta10ptBitmaps + 195}, 		// /
	{7, s_FreeSansIta10ptBitmaps + 208}, 		// 0
	{4, s_FreeSansIta10ptBitmaps + 221}, 		// 1
	{7, s_FreeSansIta10ptBitmaps + 234}, 		// 2
	{7, s_FreeSansIta10ptBitmaps + 247}, 		// 3
	{6, s_FreeSansIta10ptBitmaps + 260}, 		// 4
	{7, s_FreeSansIta10ptBitmaps + 273}, 		// 5
	{7, s_FreeSansIta10ptBitmaps + 286}, 		// 6
	{7, s_FreeSansIta10ptBitmaps + 299}, 		// 7
	{7, s_FreeSansIta10ptBitmaps + 312}, 		// 8
	{7, s_FreeSansIta10ptBitmaps + 325}, 		// 9
	{2, s_FreeSansIta10ptBitmaps + 338}, 		// :
	{2, s_FreeSansIta10ptBitmaps + 351}, 		// ;
	{7, s_FreeSansIta10ptBitmaps + 364}, 		// <
	{7, s_FreeSansIta10ptBitmaps + 377}, 		// =
	{7, s_FreeSansIta10ptBitmaps + 390}, 		// >
	{6, s_FreeSansIta10ptBitmaps + 403}, 		// ?
	{12,s_FreeSansIta10ptBitmaps + 416}, 		// @
	{8, s_FreeSansIta10ptBitmaps + 442}, 		// A
	{9, s_FreeSansIta10ptBitmaps + 455}, 		// B
	{9, s_FreeSansIta10ptBitmaps + 481}, 		// C
	{9, s_FreeSansIta10ptBitmaps + 507}, 		// D
	{9, s_FreeSansIta10ptBitmaps + 533}, 		// E
	{8, s_FreeSansIta10ptBitmaps + 559}, 		// F
	{9, s_FreeSansIta10ptBitmaps + 572}, 		// G
	{9, s_FreeSansIta10ptBitmaps + 598}, 		// H
	{3, s_FreeSansIta10ptBitmaps + 624}, 		// I
	{6, s_FreeSansIta10ptBitmaps + 637}, 		// J
	{9, s_FreeSansIta10ptBitmaps + 650}, 		// K
	{6, s_FreeSansIta10ptBitmaps + 676}, 		// L
	{11,s_FreeSansIta10ptBitmaps + 689}, 		// M
	{9, s_FreeSansIta10ptBitmaps + 715}, 		// N
	{9, s_FreeSansIta10ptBitmaps + 741}, 		// O
	{8, s_FreeSansIta10ptBitmaps + 767}, 		// P
	{9, s_FreeSansIta10ptBitmaps + 780}, 		// Q
	{9, s_FreeSansIta10ptBitmaps + 806}, 		// R
	{8, s_FreeSansIta10ptBitmaps + 832}, 		// S
	{8, s_FreeSansIta10ptBitmaps + 845}, 		// T
	{8, s_FreeSansIta10ptBitmaps + 858}, 		// U
	{8, s_FreeSansIta10ptBitmaps + 871}, 		// V
	{12,s_FreeSansIta10ptBitmaps + 884}, 		// W
	{9, s_FreeSansIta10ptBitmaps + 910}, 		// X
	{8, s_FreeSansIta10ptBitmaps + 936}, 		// Y
	{8, s_FreeSansIta10ptBitmaps + 949}, 		// Z
	{5, s_FreeSansIta10ptBitmaps + 962}, 		// [
	{1, s_FreeSansIta10ptBitmaps + 975}, 		// '\'
	{5, s_FreeSansIta10ptBitmaps + 988}, 		// ]
	{5, s_FreeSansIta10ptBitmaps + 1001}, 		// ^
	{8, s_FreeSansIta10ptBitmaps + 1014}, 		// _
	{1, s_FreeSansIta10ptBitmaps + 1027}, 		// `
	{6, s_FreeSansIta10ptBitmaps + 1040}, 		// a
	{7, s_FreeSansIta10ptBitmaps + 1053}, 		// b
	{6, s_FreeSansIta10ptBitmaps + 1066}, 		// c
	{7, s_FreeSansIta10ptBitmaps + 1079}, 		// d
	{6, s_FreeSansIta10ptBitmaps + 1092}, 		// e
	{4, s_FreeSansIta10ptBitmaps + 1105}, 		// f
	{8, s_FreeSansIta10ptBitmaps + 1118}, 		// g
	{6, s_FreeSansIta10ptBitmaps + 1131}, 		// h
	{3, s_FreeSansIta10ptBitmaps + 1144}, 		// i
	{5, s_FreeSansIta10ptBitmaps + 1157}, 		// j
	{6, s_FreeSansIta10ptBitmaps + 1170}, 		// k
	{3, s_FreeSansIta10ptBitmaps + 1183}, 		// l
	{10,s_FreeSansIta10ptBitmaps + 1196}, 		// m
	{6, s_FreeSansIta10ptBitmaps + 1222}, 		// n
	{6, s_FreeSansIta10ptBitmaps + 1235}, 		// o
	{8, s_FreeSansIta10ptBitmaps + 1248}, 		// p
	{7, s_FreeSansIta10ptBitmaps + 1261}, 		// q
	{4, s_FreeSansIta10ptBitmaps + 1274}, 		// r
	{5, s_FreeSansIta10ptBitmaps + 1287}, 		// s
	{3, s_FreeSansIta10ptBitmaps + 1300}, 		// t
	{7, s_FreeSansIta10ptBitmaps + 1313}, 		// u
	{6, s_FreeSansIta10ptBitmaps + 1326}, 		// v
	{8, s_FreeSansIta10ptBitmaps + 1339}, 		// w
	{6, s_FreeSansIta10ptBitmaps + 1352}, 		// x
	{7, s_FreeSansIta10ptBitmaps + 1365}, 		// y
	{6, s_FreeSansIta10ptBitmaps + 1378}, 		// z
	{5, s_FreeSansIta10ptBitmaps + 1391}, 		// {
	{3, s_FreeSansIta10ptBitmaps + 1404}, 		// |
	{5, s_FreeSansIta10ptBitmaps + 1417}, 		// }
	{6, s_FreeSansIta10ptBitmaps + 1430}, 		// ~
};

// Font information for FreeSans 10pt
const FontDesc_t iFontFreeSansIta10pt = {
	FONT_TYPE_VAR_WIDTH,
	12,
	13,
	{.pCharDesc = s_FreeSansIta10ptCharDesc }
};
