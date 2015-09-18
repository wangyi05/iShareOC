//
//  AddNewShareViewController.h
//  iShare
//
//  Created by caoyong on 5/12/15.
//  Copyright (c) 2015 caoyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CYkeyboard.h"
#import "DaiDodgeKeyboard.h"
#import <gRPC/RxLibrary/GRXWriter.h>
#import <gRPC/RxLibrary/GRXWriteable.h>
#import <gRPC/RxLibrary/GRXWriter+Immediate.h>

@interface AddNewShareViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>


@property (weak, nonatomic) IBOutlet UIButton *takePicture;

@property (weak, nonatomic) IBOutlet UILabel *amount;

@property (weak, nonatomic) IBOutlet UILabel *type;
@property (weak, nonatomic) IBOutlet UIView *typeBackground;

@property (weak, nonatomic) IBOutlet UILabel *paidBy;
@property (weak, nonatomic) IBOutlet UIView *paidByBackground;

@property (weak, nonatomic) IBOutlet UILabel *data;
@property (weak, nonatomic) IBOutlet UIView *dataBackground;

@property (weak, nonatomic) IBOutlet UILabel *member;
@property (weak, nonatomic) IBOutlet UIView *memberBackground;

@property (weak, nonatomic) IBOutlet UITextView *comment;
@property (weak, nonatomic) IBOutlet UILabel *creater;


//@property (weak, nonatomic) NSString *idText;
@property (strong, nonatomic) NSDate *mydate;
@property (weak, nonatomic) UIViewController *mainUIView;
@property(nonatomic) BOOL customPic;
@property (strong, nonatomic) CYkeyboard *keyboard;
- (void)unlight;
- (void)resetAllBackground;
@end


