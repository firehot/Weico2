//
//  AppDelegate.h
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginViewControllers.h"
#import "RootViewController.h"
#import "NotificationViewController.h"
#import "TrendsViewController.h"
#import "ProfileViewController.h"
#import "SettingsViewController.h"
#import "PPRevealSideViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, PPRevealSideViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PPRevealSideViewController * revealSlideViewController;

@end
