//
//  MasterViewController.h
//  UIRefreshControllDemo
//
//  Created by mac24 on 9/28/12.
//  Copyright (c) 2012 mac24. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
