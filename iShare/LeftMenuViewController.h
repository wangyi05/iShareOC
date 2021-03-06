//
//  LeftMenuViewController.h
//  iShare
//
//  Created by caoyong on 5/11/15.
//  Copyright (c) 2015 caoyong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "FullSizeView.h"
#import "EaseUserHeaderView.h"


@interface LeftMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate, FullSizeViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIImageView *headImageView;
@property (nonatomic, assign) BOOL slideOutAnimationEnabled;
@property (weak, nonatomic) IBOutlet UILabel *idText;
@property (weak, nonatomic) IBOutlet UIButton *log_button;


@property(strong, nonatomic) NSMutableArray *friendsArray;
@property(strong, nonatomic) NSMutableArray *friendsIdArray;
@property(strong, nonatomic) NSMutableArray *friendsLastModified;
@property(strong, nonatomic) NSMutableArray *friendsIconList;

@property(strong, nonatomic) NSString *user_id;

@property (weak, nonatomic) UIViewController *mainUIView;
@property (weak, nonatomic) UINavigationController *mainUINavgation;

@property (strong, nonatomic) EaseUserHeaderView *headerView;

- (void)customedViewDidLoad;

- (void)obtain_friends;

- (void)loadUserData;
@end
