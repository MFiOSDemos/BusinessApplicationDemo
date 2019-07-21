//
//  EmailViewController.h
//  BusinessApplication
//
//  Created by chang on 14/09/2019.
//  Copyright © 2019 chang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <MessageUI/MessageUI.h>

NS_ASSUME_NONNULL_BEGIN

@interface EmailViewController : UIViewController <MFMailComposeViewControllerDelegate, UITextViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UITextView *messageField;
@property (weak, nonatomic) IBOutlet UIButton *button1;

- (IBAction)dismissKeyboard:(id)sender;

- (IBAction)send:(id)sender;


@end

NS_ASSUME_NONNULL_END
