//
//  DetailViewController.h
//  UIRefreshControllDemo
//
//  Created by mac24 on 9/28/12.
//  Copyright (c) 2012 mac24. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
