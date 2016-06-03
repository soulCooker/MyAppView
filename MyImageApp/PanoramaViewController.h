//
//  PanoramaViewController.h
//  MyImageApp
//
//  Created by Mark on 16/5/24.
//  Copyright © 2016年 Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHImagePickerMutilSelector.h"

@interface PanoramaViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate,MHImagePickerMutilSelectorDelegate>
@property (nonatomic) NSMutableArray *capturedImage;
@end
