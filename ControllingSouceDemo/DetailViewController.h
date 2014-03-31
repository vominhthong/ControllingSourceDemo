//
//  DetailViewController.h
//  ControllingSouceDemo
//
//  Created by MC372 on 3/31/14.
//  Copyright (c) 2014 MC372. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
