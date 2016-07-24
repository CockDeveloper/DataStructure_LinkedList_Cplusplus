namespace NodeLib
{
    typedef struct NodeInt
    {
        int data;
        struct NodeInt *next;
    }tNodeInt;

    /*Method: InsertFront ==> Returning the new head pointer
     *@param NodeInt* head => head of list
     *@param int data => data of node insert
     *
     *@return NodeInt* => return new head
     */
    tNodeInt* InsertAtHead(tNodeInt *head, int data);

    /*Method: InsertFront ==> //Updating the head pointer by passing it by reference
     *@param NodeInt* head => head of list
     *@param int data => data of node insert
     *
     *@return bool => return true if successfully, otherwise return false
     */
    bool InsertAtHead(tNodeInt **head, int data);

    /*Method: Print => Print elements of a linked list on console 
    head pointer input could be NULL as well for empty list
     *@param NodeInt* head => head of list
     *
     *@return void
     */
    void Print(tNodeInt *head);
}