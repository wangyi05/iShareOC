//
//  QuickTypeViewController.h
//  iShare
//
//  Created by caoyong on 1/23/16.
//  Copyright © 2016 caoyong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuickTypeViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@end
