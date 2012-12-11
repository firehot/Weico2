//
//  BaseCell.m
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "BaseCell.h"

@implementation BaseCell

-(void)reset
{

}

+(NSString *)cellIdentifier
{
    return NSStringFromClass([self class]);
}

+(id)cellForTableView:(UITableView *)tableView withStyle:(UITableViewCellStyle)style cellID:(NSString *)cellID
{
    UITableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (cell == nil) {
        cell = [[[self alloc] initWithStyle:style reuseIdentifier:cellID] autorelease];
    }
    return cell;
}

+(id)cellForTableView:(UITableView *)tableView withStyle:(UITableViewCellStyle)style
{
    NSString * cellID = nil;
    if (style == UITableViewCellStyleDefault) {
        cellID = @"UITableViewCellStyleDefault";
    }
    else if (style == UITableViewCellStyleValue1) {
        cellID = @"UITableViewCellStyleValue1";
    }
    else if (style == UITableViewCellStyleValue2) {
        cellID = @"UITableViewCellStyleValue2";
    }
    else if (style == UITableViewCellStyleSubtitle) {
        cellID = @"UITableViewCellStyleSubtitle";
    }
    UITableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (cell == nil) {
        cell = [[self alloc] initWithStyle:style reuseIdentifier:cellID];
    }
    return cell;
}

+(id)cellForTableView:(UITableView *)tableView fromNib:(UINib *)nib
{    
    NSString * cellID = [self cellIdentifier];
    UITableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell) {
        NSLog(@"This cell is new!!");
        NSArray * nibObjects = [nib instantiateWithOwner:nil options:nil];
        cell = [nibObjects objectAtIndex:0];
    }
    else {
    [(BaseCell *)cell reset];
    }
    return cell;
}

+(NSString *)nibName
{
    return [self cellIdentifier];
}

+(UINib *)nib
{
    NSBundle * classBundle = [NSBundle bundleForClass:[self class]];
    return [UINib nibWithNibName:[self nibName] bundle:classBundle];
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
