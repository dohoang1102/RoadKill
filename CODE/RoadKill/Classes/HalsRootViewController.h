//
//  HalsRootViewController.h
//  RoadKill
//
//  Created by Joel Ware on 9/27/10.
//  Copyright University of Washington 2010. All rights reserved.
//

	//#import are found in the Prefix file
#import "CameraViewController.h"

@interface HalsRootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {

@private
    NSFetchedResultsController *fetchedResultsController_;
    NSManagedObjectContext *managedObjectContext_;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;

@end
