//
//  LFSContentActions.h
//  CommentStream
//
//  Created by Eugene Scherba on 5/16/14.
//  Copyright (c) 2014 Livefyre. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LFSContent.h"

typedef NS_ENUM(NSUInteger, LFSContentAction) {
    /*! Unsolicited advertising (flagging will delete content when performed by moderator) */
    LFSContentActionBanUser = 0u,            // 0
    LFSContentActionBozo,            // 1
    LFSContentActionFeature,           // 2
    LFSContentActionFlag,           // 3
    LFSContentActionEdit,           // 4
    LFSContentActionDelete           // 5
};
// }}}


@protocol LFSContentActionsDelegate;

@interface LFSContentActions : NSObject <UIActionSheetDelegate>

@property (nonatomic, assign) id<LFSContentActionsDelegate> delegate;
@property (nonatomic, strong) UIActionSheet *actionSheet;

@end


@protocol LFSContentActionsDelegate <NSObject>

-(void)flagContentWithFlag:(LFSContentFlag)flag;
-(void)performAction:(LFSContentAction)action;
-(UINavigationController*)navigationController;

@end
