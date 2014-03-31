//
//  MasterViewController.h
//  ControllingSouceDemo
//
//  Created by MC372 on 3/31/14.
//  Copyright (c) 2014 MC372. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
