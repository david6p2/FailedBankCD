//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by David Cespedes on 19/10/12.
//  Copyright (c) 2012 LSR Marketing Service. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@end
