/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewController.h"

@class DialerController;

__attribute__((visibility("hidden")))
@interface PHStarkDialerViewController : PHStarkGenericTableViewController {
	DialerController* _dialerController;
	int _currentHighlightedControlIndex;
}
@property(assign) int currentHighlightedControlIndex;
@property(retain) DialerController* dialerController;
-(void)_physicalButtonsCancelled:(id)cancelled withEvent:(id)event;
-(void)_physicalButtonsEnded:(id)ended withEvent:(id)event;
-(void)_physicalButtonsBegan:(id)began withEvent:(id)event;
-(void)_wheelChangedWithEvent:(id)event;
-(void)dealloc;
-(void)loadView;
@end

