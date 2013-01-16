//
//  FirstClassAppDelegate.h
//  SharKitDemo
//
//  Created by pranav thakker on 09/05/12.
//  Copyright (c) 2012 pranav.thakker@sufalamtech.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FirstClassViewController;

@interface FirstClassAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) FirstClassViewController *viewController;

@end
