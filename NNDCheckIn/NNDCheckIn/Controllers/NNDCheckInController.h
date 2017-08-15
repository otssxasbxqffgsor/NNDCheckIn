
/*  Copyright © 2017 Kian Davoudi-Rad. All rights reserved.
 Author: Kian D.Rad
 Date:   August 3rd 2017
 ReadMe:
 */
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <NNDCheckInService.h>

#import "NNDCheckInModel.h"

//! Project version number for NNDCheckIn.
FOUNDATION_EXPORT double NNDCheckInVersionNumber;

//! Project version string for NNDCheckIn.
FOUNDATION_EXPORT const unsigned char NNDCheckInVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <NNDCheckIn/PublicHeader.h>


@interface NNDCheckInController : NSObject<NNDCheckInServiceProtocolDelegate>



// TO read more about delegates and protocols:
// https://www.tutorialspoint.com/objective_c/objective_c_protocols.htm
@property (strong, nonatomic) id delegate;


- (instancetype)initWithDataModel;

-(void) HelloDepenecyIntegrationNNDCheckInController;



@end
