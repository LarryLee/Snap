//
//  JoinViewController.h
//  Snap
//
//  Created by Dylan Bettermann on 7/5/13.
//  Copyright (c) 2013 Dylan Bettermann. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JoinViewController;

@protocol JoinViewControllerDelegate <NSObject>

- (void)joinViewControllerDidCancel:(JoinViewController *)controller;

@end

@interface JoinViewController : UIViewController

@property (nonatomic, weak) id <JoinViewControllerDelegate> delegate;

@end
