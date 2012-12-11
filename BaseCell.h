//
//  BaseCell.h
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseCell : UITableViewCell

+(UINib *)nib;

+(id)cellForTableView:(UITableView *)tableView withStyle:(UITableViewCellStyle)style cellID:(NSString *)cellID;
+(id)cellForTableView:(UITableView *)tableView withStyle:(UITableViewCellStyle)style;
+(id) cellForTableView:(UITableView *)tableView fromNib:(UINib *)nib;

+(NSString *)cellIdentifier;

-(void)reset;

@end
