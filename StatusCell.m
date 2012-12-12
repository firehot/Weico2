//
//  StatusCell.m
//  Weico2
//
//  Created by qianfeng on 12-12-12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "StatusCell.h"

#define IMAGE_VIEW_HEIGHT 70.0

@implementation StatusCell

@synthesize retwitterBgImage;
@synthesize retwitterContentTF;
@synthesize retwitterContentImage;
@synthesize countLB;
@synthesize avatarImage;
@synthesize contentTF;
@synthesize userNameLB;
@synthesize bgImage;
@synthesize contentImage;
@synthesize retwitterMainV;
@synthesize delegate;
@synthesize cellIndexPath;
@synthesize fromLB;
@synthesize timeLB;

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
