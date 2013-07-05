//
//  HostViewController.h
//  Snap
//
//  Created by Dylan Bettermann on 7/5/13.
//  Copyright (c) 2013 Dylan Bettermann. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HostViewController;

@protocol HostViewControllerDelegate <NSObject>

- (void)hostViewControllerDidCancel:(HostViewController *)controller;

@end

@interface HostViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

@property (nonatomic, weak) id <HostViewControllerDelegate> delegate;

@end
