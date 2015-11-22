//
//  PageContentViewController.h
//  PageViewDemo
//
//  Created by Pablo Ortega Mesa on 16-11-15.
//  Copyright © 2015 khrno.cl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;


@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
