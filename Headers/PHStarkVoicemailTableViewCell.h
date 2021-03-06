/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PHStarkGenericTableViewCell.h"

@class UILabel, UIImageView, UIDateLabel, NSLayoutConstraint, VMVoicemail;

__attribute__((visibility("hidden")))
@interface PHStarkVoicemailTableViewCell : PHStarkGenericTableViewCell {
	VMVoicemail* _representedVoicemail;
	UILabel* _nameLabel;
	NSLayoutConstraint* _nameLabelBaselineConstraint;
	UILabel* _pendingLabel;
	UIDateLabel* _dateLabel;
	UIImageView* _unreadIndicatorImageView;
}
@property(retain) UIImageView* unreadIndicatorImageView;
@property(retain) UIDateLabel* dateLabel;
@property(retain) UILabel* pendingLabel;
@property(retain) NSLayoutConstraint* nameLabelBaselineConstraint;
@property(retain) UILabel* nameLabel;
@property(retain, nonatomic) VMVoicemail* representedVoicemail;
-(void)setPendingState:(BOOL)state;
-(void)updatePendingState;
-(void)_voicemailFlagsDidChangeNotification:(id)_voicemailFlags;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

