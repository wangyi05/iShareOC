//
//  BillTableViewCell.m
//  iShare
//
//  Created by caoyong on 7/6/15.
//  Copyright (c) 2015 caoyong. All rights reserved.
//

#import "BillTableViewCell.h"

#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define CellWidth 320.0

@implementation BillTableViewCell

//- (void)awakeFromNib {
//    // Initialization code
//}
//
//- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
//    [super setSelected:selected animated:animated];
//
//    // Configure the view for the selected state
//}

-(void) setFrame:(CGRect) frame {

    frame.origin.x = 60.0;
    frame.size.width = CellWidth - 60.0;
    frame.size.height = 50.0;

    [super setFrame:frame];
}

- (void)initWithLabel:(NSString *)label {
    self.backgroundColor = RGB(245, 245, 245);
    self.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
}

- (void)initWithType:(NSString *)type amount:(NSString *)amount day:(NSString *)day dayHiden:(BOOL)dayHiden{
    // modify ui
    self.backgroundColor = RGB(245, 245, 245);
    self.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    UIImageView *lineImage = [[UIImageView alloc] initWithFrame:CGRectMake(0, 49, 320, 1)];
    lineImage.image = [UIImage imageNamed:@"line.png"];
    [self addSubview:lineImage];
    
    UIImageView *VlineImage = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 1, 50)];
    VlineImage.image = [UIImage imageNamed:@"vertical line.png"];
    [self addSubview:VlineImage];
    [self sendSubviewToBack:VlineImage];
    UIImageView *left = [[UIImageView alloc] initWithFrame:CGRectMake(-60, 0, 60, 50)];
    [left setImage:[self imageWithColor:RGB(245, 245, 245)]];
    
    [self addSubview:left];
    [self sendSubviewToBack:left];
    
    _monthLine = [[UIImageView alloc] initWithFrame:CGRectMake(-60, 49, 60, 1)];
    _monthLine.image = [UIImage imageNamed:@"line.png"];
    [self addSubview:_monthLine];
    
    ///////////////////
    
    _image.image = [UIImage imageNamed:[NSString stringWithFormat:@"%@.png", type]];
    _type.text = type;
    _amount.text = amount;
    _day.text = day;
    
    _day.hidden = dayHiden;
    
}

- (void)SetDayHiden:(BOOL)dayHiden {
    _day.hidden = dayHiden;
}

- (void)SetMonthLineHiden:(BOOL)hiden {
    _monthLine.hidden = hiden;
}

- (UIImage *)imageWithColor:(UIColor *)color
{
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return image;
}

@end
