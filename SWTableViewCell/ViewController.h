//
//  ViewController.h
//  SWTableViewCell
//
//  Created by Chris Wendel on 9/10/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "BVReorderTableView.h"

@interface ViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, SWTableViewCellDelegate, ReorderTableViewDelegate>

@end
