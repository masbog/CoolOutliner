//
//  CODocument.h
//  CoolOutliner
//
//  Created by Jan on 10.07.10.
//  Copyright __MyCompanyName__ 2010 . All rights reserved.
//


#import <Cocoa/Cocoa.h>
@interface CODocument : NSDocument
{
	IBOutlet NSOutlineView *outlineView;
	IBOutlet NSTableView *tableView;
	IBOutlet NSTextView *textView;
	IBOutlet NSTreeController *treeController;
	IBOutlet NSArrayController *arrayController;
	
	NSArray *contents;
}

@property (copy) NSArray *contents;

- (IBAction)addGroup:(id)sender;
- (IBAction)addNote:(id)sender;

@end