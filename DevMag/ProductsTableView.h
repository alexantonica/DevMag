//
//  FirstViewController.h
//  DevMag
//
//  Created by Alexandru Antonica on 12/17/15.
//  Copyright © 2015 Alexandru Antonica. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProductsTableView : UIViewController <UITableViewDelegate,UITableViewDataSource,UISearchResultsUpdating>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *editButton;

@property (nonatomic) UIBarButtonItem *done;

@end

